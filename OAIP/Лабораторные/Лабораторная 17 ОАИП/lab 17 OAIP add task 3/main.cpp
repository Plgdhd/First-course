#include <iostream>
#include <vector>
using namespace std;
int* maxOfArray(int* array, int n);
int* minOfArray(int* array, int n);
int* colOfPlus(int** array1, int* indexov, int n);
void main() {
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int n = 0,difference, max, min, index;
	int** array1;
	bool isTrue = false;
	int* indexov = new int[n];
	int* ptr;
	while (true) {
		cout << "\nВыберите операцию:\n1 - Первое задание\n2 - Второе задание\n3 - Выход\nВаш выбор: ";
		int choice = 0;
		cin >> choice;
		switch (choice)
		{
		case 1:
			int* array;
			cout << "\nВведите размер массива: ";
			cin >> n;
			array = new int[n];
			cout << "Исходный массив: ";
			for (int i = 0; i < n; i++) {
				*(array + i) = rand() % 30;
				cout << *(array + i) << " ";
			}
			max = *(maxOfArray(array, n));
			min = *(minOfArray(array, n));
			difference = max - min;
			cout << "\nПолученная разность: " << difference;
			delete[] array;
			break;
		case 2:
			cout << "\nВведите размер матрицы nxn: ";
			cin >> n;
			array1 = new int* [n];
			for (int i = 0; i < n; i++) {
				array1[i] = new int[n];
			}
			cout << "Исходная матрица: \n";
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					*(*(array1 + i) + j) = (rand() % 30) - 5;
					cout << *(*(array1 + i) + j) << " ";
				}
				cout << "\n";
			}
			for (int i = 0; i < n; i++) {
				*(indexov + i) = -1;
			}
			ptr = colOfPlus(array1, indexov, n);
			for (int i = 0; i < n; i++) {
				if (*(ptr + i) != -1) {
					isTrue = true;
				}
			}
			if (isTrue == false) {
				cout << "Полученная матрица: \n";
				for (int i = 0; i < n; i++) {
					for (int j = 0; j < n; j++) {
						cout << *(*(array1 + i) + j) << " ";
					}
					cout << "\n";
				}
				for (int i = 0; i < n; i++) {
					delete[] array1[i];
				}
				delete[] array1;
				break;
				return;
			}
			for(int k = 0; k<n; k++){
				if (*(ptr + k) != -1) {
					for (int i = 0; i < n; i++) {
						*(*(array1 + i) + (k == 0 ? n - 1 : k-1)) *= -1;
					}
				}
			}
			cout << "Полученная матрица: \n";
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					cout << *(*(array1 + i) + j) << " ";
				}
				cout << "\n";
			}
			for (int i = 0; i < n; i++) {
				delete[] array1[i];
			}
			delete[] array1;
			delete[] indexov;
			cout << "\n";
			break;
		case 3:
			cout << "Конец программы!";
			return;
		default:
			cout << "Неверное значение!";
			return;
		}
	}
}
int* minOfArray(int* array, int n) {
	int min = *array, imin = 0;
	for (int i = 0; i < n; i++) {
		if (*(array + i) < min) {
			min = *(array + i);
			imin = i;
		}
	}
	return array+imin;
}
int* maxOfArray(int* array, int n) {
	int max = *array, imax = 0;
	for (int i = 0; i < n; i++) {
		if (*(array + i) > max) {
			max = *(array + i);
			imax = i;
		}
	}
	return array + imax;
}

int* colOfPlus(int** array1, int* indexov,  int n) {
	setlocale(LC_ALL, "rus");
	int index;
	bool isTrue =true;
	for (int j= 0; j < n; j++) {
		isTrue = true;
		for (int i = 0; i < n; i++) {
			if (*(*(array1+i)+j) < 0) {
				isTrue = false;
			}
		}
		if (isTrue) {
			*(indexov+j) = j;
		}
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << *(indexov + i) << " ";
	}
	cout << endl;
	return indexov;
}
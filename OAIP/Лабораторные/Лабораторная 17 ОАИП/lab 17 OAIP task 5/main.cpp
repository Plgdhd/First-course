#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
long long task1(int* array, int n);
void task2(int** array, int n);
int& subtraction(int& array, int averageSum);
void main() {
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int n = 0;
	long long p = 0;
	int** array1;
	while (true) {
		cout << "\nВыберите операцию:\n1 - Первое задание\n2 - Второе задание\n3 - Выход\nВаш выбор: ";
		int choice = 0;
		cin >> choice;
		switch (choice)
		{
		case 1:
			int* array;
			array = new int[15];
			cout << "Исходный массив: ";
			for (int i = 0; i < 15; i++) {
				*(array + i) = rand() % 200;
				cout << *(array + i) << " ";
			}
		    p = task1(array, 15);
			cout << "\nПроизведение элементов от 2 до 7: " << p;
			delete[] array;
			break;
		case 2:
			cout << "\nВведите размер матрицы nxn: ";
			cin >> n;
			array1 = new int* [n];
			for (int i = 0; i < n; i++) {
				array1[i] = new int[n];
			}
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					*(*(array1 + i) + j) = (rand() % 30) - 25;
					cout << *(*(array1 + i) + j) << " ";
				}
				cout << "\n";
			}
			task2(array1, n);
			for (int i = 0; i < n; i++) {
				delete[] array1[i];
			}
			delete[] array1;
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
long long task1(int* array , int n) {
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	long long p = 1;
	for (int i = 2; i < 8; i++) {
		p = p * (*(array + i));
	}
	return p;

}
void task2(int** array, int n) {
	setlocale(LC_ALL, "rus");
	int count = 0, otrIndex = -1;
	for (int j = 0;j< n; j++) {
		count=0;
		for (int i = 0; i < n; i++) {
			if (*(*(array + i)+j) < 0) {
				count++;
			}
		}
		if (count == n) {
			otrIndex = j;
			cout << otrIndex << endl;
			break;
		}
	}
	if (otrIndex != -1) {
		int averageSum = 0;
		for (int i = 0; i < n; i++) {
			averageSum += *(*(array + i) + otrIndex);
		}
		averageSum /= n;
		cout << "\nСреднее арифметическое: " << averageSum << "\n";
		cout << "Полученная матрица: \n";
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				subtraction(*(*(array + i) + j), averageSum);
				cout << *(*(array + i) + j) << " ";
			}
			cout << "\n";
		}
	}
	else {
		cout << "Полученная матрица: \n";
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << *(*(array + i) + j) << " ";
			}
			cout << "\n";
		}
	}
}
int& subtraction(int& array, int averageSum) {
	array -= averageSum;
	return array;
}
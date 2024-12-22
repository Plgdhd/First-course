#include <iostream>
#include <ctime>
using namespace std;
void main() {
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	int n, m;
	cout << "Введите n: ";
	cin >> n;
	cout << "\nВведите m: ";
	cin >> m;
	int** array = new int* [n];
	for (int i = 0; i < n; i++) {
		*(array+i) = new int[m];
	}
	cout << "\nПолученная матрица:\n ";
	for (int i = 0; i < n-1; i++) {
		for (int j = 0; j < m; j++) {
			*(*(array+i)+j) = rand() % 99;
			cout << *(*(array + i) + j) << " ";
		}
		cout << "\n";
	}
	for (int j = 0; j < m; j++) {
		*(*(array + n-1) + j) = 0;
		cout << *(*(array + n-1) + j) << " ";
	}
	bool isZero = true;
	int iZero = 0;
	int min = array[0][0], max = array[0][0], imin = 0, jmin = 0, imax = 0, jmax = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (*(*(array + i) + j) != 0) {
				continue;
			}
			iZero = i;
		}
	}
	for (int i = 0; i < n; i++) {
		*(*(array + i) + iZero) /= 2;
	}
	cout << "\nПолученный массив:\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << *(*(array + i) + j) << " ";
		}
		cout << "\n";
	}
	for (int i = 0; i < n; i++) {
		delete[] *(array + i);
	}
	delete[] array;
}
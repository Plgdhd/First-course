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
		array[i] = new int[m];
	}
	cout << "\nПолученная матрица:\n ";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			array[i][j] = rand() % 99;
			cout << array[i][j] << " ";
		}
		cout << "\n";
	}
	int min = array[0][0], max = array[0][0], imin = 0, jmin = 0, imax = 0, jmax = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (array[i][j] < min) {
				imin = i;
				jmin = j;
				min = array[i][j];
			}
			if (array[i][j] > max) {
				imax = i;
				jmax = j;
				max = array[i][j];
			}
		}
	}
	cout << "\n Минимальный элемент: " << min << " Максимальный элемент: " << max << "\n";
	cout << "Полученный массив:\n";
	array[imin][jmin] = max;
	array[imax][jmax] = min;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << array[i][j] << " ";
		}
		cout << "\n";
	}
	for (int i = 0; i < n; i++) {
		delete[] array[i];
	}
	delete[] array;
}
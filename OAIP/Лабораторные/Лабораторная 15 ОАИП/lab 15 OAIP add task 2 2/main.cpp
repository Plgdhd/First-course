#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int n = 0;
	cout << "Введите размерность матрицы nxn: ";
	cin >> n;
	int** array = new int* [n];
	for (int i = 0; i < n; i++) {
		array[i] = new int[n];
	}
	int iZero = -1;
	cout << "\nИсходная матрица:\n ";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			array[i][j] = rand() % 10;
			if (array[i][j] == 0 && iZero == -1) {
				iZero = i;
			}
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	int number = array[iZero][0];
	cout << "\nПолученная матрица:\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			array[i][j] -= number;
			cout << array[i][j] << " ";

		}
		cout << endl;
	}
	for (int i = 0; i < n; i++) {
		delete[] array[i];
	}
	delete[] array;
}
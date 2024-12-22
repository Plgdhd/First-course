#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int iOfStr = -1;
	int n = 0;
	cout << "Введите размер матрицы nxn: ";
	cin >> n;
	int** array = new int* [n];
	for (int i = 0; i < n; i++) {
		array[i] = new int[n];
	}
	cout << "Исходная матрица:\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			array[i][j] = (rand() % 30) - 1;
			if (array[i][j] < 0) {
				iOfStr = i;
			}
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < n; i++) {
		array[i][iOfStr] /= 2;
	}
	cout << "Полученная матрица: \n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < n; i++) {
		delete array[i];
	}
	delete[] array;
}
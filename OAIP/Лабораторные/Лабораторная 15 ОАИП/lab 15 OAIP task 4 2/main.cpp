#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int n, m, count = 0;
	cout << "Введите n: ";
	cin >> n;
	cout << "Введите m: ";
	cin >> m;
	int** array = new int* [n];
	for (int i = 0; i < n; i++) {
		array[i] = new int[m];
	}
	bool isZero = false;
	int max = array[0][0];
	cout << "\nПолученный массив:\n ";
	for (int i = 0; i < n; i++) {
		isZero = false;
		for (int j = 0; j < m; j++) {
			array[i][j] = (rand() % 10);
			if (array[i][j] == 0) {
				isZero = true;
			}
			bool isRepeat = false;
			for (int k = 0; k < n; k++) {
				for (int o = 0; o < m; o++) {
					if (array[i][j] == array[k][o] && i != k && j != o) {
						isRepeat = true;
					}
				}
				if (isRepeat && array[i][j] > max) {
					max = array[i][j];
				}
			}
			cout << array[i][j] << " ";
		}
		if (!isZero) count++;
		cout << endl;
	}
	cout << "\nКоличество строк без нулей: " << count;
	cout << "\nМаксимальное число среди повторяющихся: " <<  max;
	for (int i = 0; i < n; i++) {
		delete[] array[i];
	}
	delete[] array;
}

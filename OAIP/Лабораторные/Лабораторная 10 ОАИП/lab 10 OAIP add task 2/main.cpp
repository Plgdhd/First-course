#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "rus");
	int n = 0, counter = 0;
	cout << "Введите размер массива: ";
	cin >> n;
	int* array = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> array[i];
	}
	for (int i = 0; i < n; i++) {
		if (array[i] == array[i + 1] && i != n - 1) {
			counter++;
		}
	}
	cout << "Количество пар: " << counter;
	delete[] array;
}
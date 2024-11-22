#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "rus");
	int n = 0, currentCounter = 1, counter = 1 ;
	cout << "Введите размер массив: ";
	cin >> n;
	int* array = new int[n];
	cout << "Введите массив: ";
	for (int i = 0; i < n; i++) {
		cin >> array[i];
	}
	for (int i = 0; i < n; i++) {
		while (array[i] == array[i + 1] && i != n-1) {
			currentCounter++;
			i++;
		}
		if (currentCounter > counter) {
			counter = currentCounter;
			currentCounter = 1;
		}
	}
	cout << "Наибольшее повторение символов: " << counter;
}
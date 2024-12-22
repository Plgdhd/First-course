#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
void task1(int** array, int n);
void task2(char* words);
void main() {
	setlocale(LC_ALL, "rus");
	int n = 0, m = 0;
	while (true) {
		cout << "\nВыберите операцию:\n1 - Первое задание\n2 - Второе задание\n3 - Выход\nВаш выбор: ";
		int choice = 0;
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "\nВведите n: ";
			cin >> n;
			int** array;
			array = new int* [n];
			for (int i = 0; i < n; i++) {
				array[i] = new int[n];
			}
			task1(array, n);
			for (int i = 0; i < n; i++) {
				delete[] array[i];
			}
			delete[] array;
			break;
		case 2:
			char str[100];
			cout << "\nВведите строку: ";
			cin.ignore();
			cin.getline(str, 100);
			task2(str);
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
void task1(int** array, int n) {
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	cout << "\nВведите матрицу:\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "Введите элемент [" << i << "][" << j << "]:";
			cin >> *(*(array + i) + j);
		}
		cout << "\n";
	}
	for (int j = 0; j < n; j++) {
		*(*(array)+j) -= *(*(array + (n - 1)) + j);
	}
	for (int i = 1; i < n-1; i++) {
		for (int j = 0; j < n; j++) {
			*(*(array + i) + j) -= *(*(array + (i - 1)) + j);
		}
	}
	cout << "Полученная матрица: \n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << *(*(array + i) + j) << " ";
		}
		cout << "\n";
	}
}
void task2(char* str) {
	setlocale(LC_ALL, "rus");
	int len = strlen(str);
	int sum = 0;
	for (int i = 0; i < len; i++) {
		if (*(str + i) >= '0' && *(str + i) <= '9') {
			sum += *(str + i) - '0';
		}
	}
	cout << "Сумма цифр: " << sum;
}
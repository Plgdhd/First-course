#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
void task1(int** array, int n);
void task2(char* words);
void main() {
	setlocale(LC_ALL, "rus");
	int n = 0, m = 0;
	while (true) {
		cout << "\n�������� ��������:\n1 - ������ �������\n2 - ������ �������\n3 - �����\n��� �����: ";
		int choice = 0;
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "\n������� n: ";
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
			cout << "\n������� ������: ";
			cin.ignore();
			cin.getline(str, 100);
			task2(str);
			break;
		case 3:
			cout << "����� ���������!";
			return;
		default:
			cout << "�������� ��������!";
			return;
		}
	}
}
void task1(int** array, int n) {
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	cout << "\n������� �������:\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "������� ������� [" << i << "][" << j << "]:";
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
	cout << "���������� �������: \n";
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
	cout << "����� ����: " << sum;
}
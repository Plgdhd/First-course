#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
void task1(int* array, int n);
void task2(int** array, int n);
void main() {
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int n = 0;
	int** array1;
	while (true) {
		cout << "\n�������� ��������:\n1 - ������ �������\n2 - ������ �������\n3 - �����\n��� �����: ";
		int choice = 0;
		cin >> choice;
		switch (choice)
		{
		case 1:
			int* array;
			cout << "������� ������: ";
			cin >> n;
			array = new int[n];
			cout << "�������� ������: ";
			for (int i = 0; i < n; i++) {
				*(array + i) = (rand() % 30) - 5;
				cout << *(array + i) << " ";
			}
			task1(array, n);
			delete[] array;
			break;
		case 2:
			cout << "\n������� ������ ������� nxn: ";
			cin >> n;
			array1 = new int* [n];
			for (int i = 0; i < n; i++) {
				array1[i] = new int[n];
			}
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					*(*(array1 + i) + j) = (rand() % 30) - 5;
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
			cout << "����� ���������!";
			return;
		default:
			cout << "�������� ��������!";
			return;
		}
	}
}
void task1(int* array, int n) {
	setlocale(LC_ALL, "rus");
	int maxOfOtr = -999, imax = -1;
	for (int i = 0; i < n; i++) {
		if ((*(array + i) < 0 && *(array + i) > maxOfOtr) || (*(array + i) < 0 && maxOfOtr == -999)) {
			maxOfOtr = *(array + i);
			imax = i;
		}
	}
	cout << "���������� ������: ";
	if (imax == -1) {
		for (int i = 0; i < n; i++) {
			cout << *(array + i) << " ";
		}
	}
	else {
		int tmp = *(array + imax);
		*(array + imax) = *(array + (n - 1));
		*(array + (n - 1)) = tmp;
		for (int i = 0; i < n; i++) {
			cout << *(array + i) << " ";
		}
	}
}
void task2(int** array, int n) {
	setlocale(LC_ALL, "rus");
	int count = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (*(*(array + i) + j) < 0) {
				count++;
				break;
			}
		}
	}

	if (count == n) {
		cout << "���������� �������: \n";
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				*(*(array + i) + j) *= -1;
				cout << *(*(array + i) + j) << " ";
			}
			cout << "\n";
		}
	}
	else {
		cout << "���������� �������: \n";
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << *(*(array + i) + j) << " ";
			}
			cout << "\n";
		}
	}
}
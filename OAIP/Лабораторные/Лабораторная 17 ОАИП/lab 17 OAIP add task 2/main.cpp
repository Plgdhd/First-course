#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
void task1(int* array, int n);
void task2(int** array1, int** array2, int n, int m);
void main() {
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int n = 0, m = 0;
	int** array1;
	int** array2;
	while (true) {
		cout << "\n�������� ��������:\n1 - ������ �������\n2 - ������ �������\n3 - �����\n��� �����: ";
		int choice = 0;
		cin >> choice;
		switch (choice)
		{
		case 1:
			int* array;
			array = new int[15];
			cout << "�������� ������: ";
			for (int i = 0; i < 15; i++) {
				*(array + i) = rand() % 30;
				cout << *(array + i) << " ";
			}
			task1(array, 15);
			delete[] array;
			break;
		case 2:
			cout << "\n������� ������ n: ";
			cin >> n;
			cout << "\n������� ������ m: ";
			cin >> m;
			array1 = new int* [n];
			array2 = new int* [m];
			for (int i = 0; i < n; i++) {
				array1[i] = new int[m];
			}
			for (int i = 0; i < m; i++) {
				array2[i] = new int[n];
			}
			cout << "������ �������: \n";
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) {
					*(*(array1 + i) + j) = (rand() % 30) - 1;
					cout << *(*(array1 + i) + j) << " ";
				}
				cout << "\n";
			}
			cout << "������ �������: \n";
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < n; j++) {
					*(*(array2 + i) + j) = (rand() % 30) - 1;
					cout << *(*(array2 + i) + j) << " ";
				}
				cout << "\n";
			}
			task2(array1,array2, n, m);
			for (int i = 0; i < n; i++) {
				delete[] array2[i];
			}
			delete[] array2;
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
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (*(array + i) % 2 == 0) {
			sum += *(array + i);
		}
	}
	cout << "\n����� ������ ���������: " << sum;
}

void task2(int** array1, int** array2, int n, int m) {
	setlocale(LC_ALL, "rus");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (array1[i][j] == 0) {
				cout << "� ������ ������� ���� ������� �������." << endl;
				return;
			}
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (array2[i][j] == 0) {
				cout << "�� ������ ������� ���� ������� �������." << endl;
				return;
			}
		}
	}
	int** result = new int* [n];
	for (int i = 0; i < n; i++) {
		result[i] = new int[n];
		for (int j = 0; j < n; j++) {
			result[i][j] = 0;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				result[i][j] += array1[i][k] * array2[k][j];
			}
		}
	}
	cout << "������������ ������:" << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << result[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < n; i++) {
		delete[] result[i];
	}
	delete[] result;
}

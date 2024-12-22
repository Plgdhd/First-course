#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
void task1(int** array, int n, int m);
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
			cout << "\n������� m: ";
			cin >> m;
			int** array;
			array = new int* [n];
			for (int i = 0; i < n; i++) {
				array[i] = new int[m];
			}
			task1(array, n, m);
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
			break;
		}
	}
}
void task1(int** array, int n, int m) {
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	cout << "\n���������� �������:\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			*(*(array + i) + j) = (rand() % 30) - 10;
			cout << *(*(array + i) + j) << " ";
		}
		cout << "\n";
	}
	int k = 0;
	cout << "������� k: ";
	cin >> k;
	int iOfCol = -1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (*(*(array + i) + j) == k && iOfCol == -1) {
				iOfCol = j;
				break;
			}
		}
		if (iOfCol != -1) {
			break;
		}
	}
	cout << "�����  �������, ����������� ����� d: " << iOfCol;
}
void task2(char* str) {
	setlocale(LC_ALL, "rus");
	int len = strlen(str);
	if (str[len - 1] == '.') {
		str[len - 1] = '\0';
	}
	char* words[100]; 
	int count = 0;

	char* word = strtok(str, " "); 
	while (word != NULL) {
		words[count] = word; 
		word = strtok(NULL, " ");
		count++;
	}
	if (count % 2 == 0 && count > 1) {
		int middle = count / 2;
		char* tmp = words[middle - 1];
		words[middle - 1] = words[middle];
		words[middle] = tmp;
	}

	for (int i = 0; i < count; i++) {
		cout << words[i];
		if (i < count - 1) {
			cout << " ";
		}
	}
	cout << ".";
}
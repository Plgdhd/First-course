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
	int d = 0; 
	cout << "������� d: ";
	cin >> d;
	int iOfStr = -1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (*(*(array + i) + j) == d && iOfStr==-1) {
				iOfStr = i;
				break;
			}
		}
		if (iOfStr != -1) {
			break;
		}
	}
	cout << "����� ������, ���������� ����� d: " << iOfStr;
}
void task2(char* words) {
	int sum = 0, i =0, wordCount = 0;
	while (*(words+i) != '\0') {
		i++;
		while (*(words + i) != ' ' && *(words + i) != '\0') {
			sum += static_cast<int>(*(words + i));
			i++;
		}
		wordCount++;
		cout << "\n����� " << wordCount << "-�� ����� �����: " << sum << "\n";
		sum = 0;
	}
}
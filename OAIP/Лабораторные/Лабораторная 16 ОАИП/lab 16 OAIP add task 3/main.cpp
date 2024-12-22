#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
void task1(double* array, int n);
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
			double* array;
			array = new double[n];
			task1(array, n);
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
void task1(double* array, int n) {
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	cout << "���������� ������: ";
	for (int i = 0; i < n; i++) {
		*(array + i) = (static_cast<double>(rand()) / RAND_MAX * 30) - 5;
		printf("%.2f ", *(array + i));
	}
	cout << "������� C: ";
	double c = 0, max = *(array);
	int count = 0, imax = 0;
	cin >> c;
	for (int i = 0; i < n; i++) {
		if (*(array + i) > c) {
			count++;
		}
		if (*(array + i) > max) {
			max = *(array + i);
			imax = i;
		}
	}
	double p = 1;
	for (int i = imax+1; i < n; i++) {
		p = p * *(array + i);
	}
	printf("���������� ��������� ������� �: %d\n������������ ����� �������������: %.2f", count, p);
}
void task2(char* str) {
	setlocale(LC_ALL, "rus");
	int len = strlen(str);
	int i = 0;
	while (*(str + i) != ' ' && *(str + i) != '\0') {
		*(str+i) = toupper(*(str + i));
		i++;
	}
	cout << "���������� ������: " << str;
}
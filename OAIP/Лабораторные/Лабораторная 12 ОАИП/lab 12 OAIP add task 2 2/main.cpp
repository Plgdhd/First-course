#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int m = 0,count1 = 0, count2 = 0, count3 = 0;
	cout << "������� ������ m: ";
	cin >> m;
	int* arrayC = new int[m];
	int* arrayB = new int[m];
	int* ptrC = arrayC;
	int* ptrB = arrayB;
	for (int i = 0; i < m; i++) {
		*(ptrC + i) = rand() % 99;
		*(ptrB + i) = rand() % 99;
	}
	cout << "\n������ C: ";
	for (int i = 0; i < m; i++) {
		cout << *(ptrC + i) << " ";
	}
	cout << "\n������ �: ";
	for (int i = 0; i < m; i++) {
		cout << *(ptrB + i) << " ";
	}
	for (int i = 0; i < m; i++) {
		if (*(ptrC + i) > *(ptrB + i)) {
			count1++;
		}
		if (*(ptrC + i) < *(ptrB + i)) {
			count2++;
		}
		if (*(ptrC + i) == *(ptrB + i)) {
			count3++;
		}
	}
	cout << "\n���������� C[k] > B[k]: " << count1;
	cout << "\n���������� C[k] < B[k]: " << count2;
	cout << "\n���������� C[k] = B[k]: " << count3;
	delete[] arrayB;
	delete[] arrayC;
}
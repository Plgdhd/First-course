#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "ru");
	const int n = 10;
	int* arrayA = new int[n];
	int* ptrA = arrayA;
	int t = 0, countA = 0, countB = 0;
	cout << "������� t: ";
	cin >> t;
	cout << "������� �������� � �������� " << n << ": ";
	for (int i = 0; i < n; i++) {
		cin >> *(ptrA + i);
		if (*(ptrA + i) < t) {
			countA++;
		}
	}
	int* arrayB = new int[n];
	int* ptrB = arrayB;
	cout << "������� �������� B �������� " << n << ": ";
	for (int i = 0; i < n; i++) {
		cin >> *(ptrB + i);
		if (*(ptrB + i) < t) {
			countB++;
		}
	}
	cout << "���������: \n";
	if (countA > countB) {
		for (int i = 0; i < n; i++) {
			cout << *(ptrA+i) << " ";
		}
		cout << endl;
		for (int i = 0; i < n; i++) {
			cout << *(ptrB +i) << " ";
		}
	}
	else {
		for (int i = 0; i < n; i++) {
			cout << *(ptrB + i) << " ";
		}
		cout << endl;
		for (int i = 0; i < n; i++) {
			cout << *(ptrA + i) << " ";
		}
	}
	delete[] arrayA;
}
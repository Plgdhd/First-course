#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int n = 0, k = 0;
	cout << "������� n: ";
	cin >> n;
	cout << "\n������� k: ";
	cin >> k;
	int* arrayX = new int[n];
	int* ptrX = arrayX;
	int* arrayY = new int[k];
	int* ptrY = arrayY;
	cout << "\n������� ������ X �������� " << n << ": ";
	for (int i = 0; i < n; i++) {
		cin >> *(ptrX + i);
	}
	int count = 0;
	cout << "\n������� ������ Y �������� " << k << ": ";
	for (int i = 0; i < k; i++) {
		cin >> *(ptrY + i);
		if (*(ptrX + i) == *(ptrY + i)) {
			count++;
		}
	}
	int* arrayZ = new int[count];
	int* ptrZ = arrayZ;
	for (int i = 0, j = 0; i < k; i++) {
		if (*(ptrX + i) == *(ptrY + i)) {
			*(ptrZ + j) = *(ptrX + i);
			j++;
		}
	}
	cout << "\n���������� ������ Z: ";
	for (int i = 0; i < count; i++) {
		cout << *(ptrZ + i)  << " ";
	}
	delete[] arrayZ;
	delete[] arrayX;
	delete[] arrayY;
}
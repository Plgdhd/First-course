#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "rus");
	int A, B, maskA = 30;
	char tmp[33];
	cout << "������� ����� A: ";
	cin >> A;
	cout << "������� ����� B: ";
	cin >> B;
	_itoa_s(A, tmp, 2);
	cout << "����� A � �������� �������������: " << tmp;
	_itoa_s(B, tmp, 2);
	cout << "\n����� B � �������� �������������: " << tmp;
	_itoa_s(maskA, tmp, 2);
	cout << "\n����� ��� A: " << tmp;
	_itoa_s((A & maskA) >> 4, tmp, 2);
	cout << "\n���������� ����: " << tmp;
	int maskB = ~maskA;
	_itoa_s((B & maskB) | ((A & maskA) >> 4), tmp, 2);
	cout << "\n���������: " << tmp;
}
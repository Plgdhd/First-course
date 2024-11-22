#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "rus");
	int A, B, maskA = 30;
	char tmp[33];
	cout << "Введите число A: ";
	cin >> A;
	cout << "Введите число B: ";
	cin >> B;
	_itoa_s(A, tmp, 2);
	cout << "Число A в двоичном представлении: " << tmp;
	_itoa_s(B, tmp, 2);
	cout << "\nЧисло B в двоичном представлении: " << tmp;
	_itoa_s(maskA, tmp, 2);
	cout << "\nМаска для A: " << tmp;
	_itoa_s((A & maskA) >> 4, tmp, 2);
	cout << "\nВыделенные биты: " << tmp;
	int maskB = ~maskA;
	_itoa_s((B & maskB) | ((A & maskA) >> 4), tmp, 2);
	cout << "\nРезультат: " << tmp;
}
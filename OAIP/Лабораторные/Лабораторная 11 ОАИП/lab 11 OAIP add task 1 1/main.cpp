#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "rus");
	int A;
	char tmp[33];
	cout << "������� ����� A: ";
	cin >> A;
	_itoa_s(A, tmp, 2);
	cout << "\n�������� ������������� ����� �: " << tmp;
	if ((A & 3) == 0) {
		cout << "\n����� � ������ 4";
	}
	else {
		cout << "\n����� � �� ������ 4";
	}
}
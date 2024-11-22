#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "rus");
	int A;
	char tmp[33];
	cout << "Введите число A: ";
	cin >> A;
	_itoa_s(A, tmp, 2);
	cout << "\nДвоичное представление числа А: " << tmp;
	if ((A & 3) == 0) {
		cout << "\nЧисло А кратно 4";
	}
	else {
		cout << "\nЧисло А не кратно 4";
	}
}
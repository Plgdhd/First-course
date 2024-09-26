#include <iostream>
#include <iomanip> 
using namespace std;
void main() {
	setlocale(LC_CTYPE, "rus");
	int number;
	cout << "Введите год: ";
	cin >> number;
	if (number % 4 == 0 && number % 100 != 0 || number % 400 == 0) {
		cout << "Год является високосным";
	}
	else {
		cout << "Год не является високосным!";
	}
	return;
}
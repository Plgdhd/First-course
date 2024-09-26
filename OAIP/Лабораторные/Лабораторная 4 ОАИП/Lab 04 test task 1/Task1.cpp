#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;
void main() {
	setlocale(LC_CTYPE, "Russian");
	int t; 
	cout << "Введите t=";
	cin >> t;
	cout << "t=" << t << endl;
	cout << "Тип : размер в байтах" << endl;
	cout << "int: " << sizeof(int) << endl;
	cout << "char: " << sizeof(char) << endl;
	cout << "float: " << sizeof(float) << endl;
	cout << "double: " << sizeof(double) << endl;
   int testInt;
	float testFloat;
	char testChar;
	double testDouble;
	cout << "Введите int: ";
	cin >> testInt;
	cout << endl << "Введите float: ";
	cin >> testFloat;
	cout << endl << "Введите char: ";
	cin >> testChar; 
	cout << "Введите double: ";
	cin >> testDouble;
	while (true) {
		cout << "Выберете тип для вывода: \n 1 -- int \n 2 -- double \n 3 -- char \n 4 -- float \n 5 -- выход\nВаш выбор:";
		int answer = 0;
		cin >> answer;
		cout << "Вывод: ";
		switch (answer) {
		case 1:
			cout << testInt;
			break;
		case 2:
			cout << testDouble;
			break;
		case 3:
			cout << testChar;
			break;
		case 4:
			cout << testFloat;
		case 5:
			return;
		default:
			cout << "Ошибка ввода!" << endl;

		}

	}
	
}

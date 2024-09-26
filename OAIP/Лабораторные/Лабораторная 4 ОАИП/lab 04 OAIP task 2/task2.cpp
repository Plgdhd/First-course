#include <iomanip>
#include <iostream>
void main() {
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	char c, probel;
	probel = ' ';
	cout << "Введите символ: ";
	cin >> c;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(10) << setfill(c) << endl;
	cout << setw(34) << setfill(probel) << probel;
	cout << setw(12) << setfill(c) << c << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(14) << setfill(c) << c << endl;

	int number;
	cout << "Введите целое число: ";
	cin >> number;
	float second_number;
	cout << "Введите вещественное число: ";
	cin >> second_number;
	cout << "Целое число в шеснадцатиричном представлении: " << setbase(2) << hex << number << endl;
	cout << "Вещественное число с ограничением в два знака: " << setprecision(2) << second_number << endl;
}
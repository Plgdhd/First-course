#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
void main() {
	setlocale(LC_CTYPE, "Rus");
	int a = 0, b = 0, c = 0;
	cout << "Введите коэффицент а: ";
	cin >> a;
	cout << endl << "Введите коэффицент b: ";
	cin >> b;
	cout << endl << "Введите коэффицент с: ";
	cin >> c;
	int d = pow(b, 2) - (4 * a * c);
	if (d < 0) {
		cout << "Корней нет";
		return;
	}
	else {
		int x1 = (-b - sqrt(d)) / 2 * a;
		int x2 = (-b + sqrt(d)) / 2 * a;
		cout << "Первый корень: " << x1 << "  Второй корень: " << x2 << endl;
		return;
	}
}
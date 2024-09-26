#include <iostream>
using namespace std;
void main() {
	setlocale(LC_CTYPE, "rus");
	int m = 0, n = 0, k = 0, l =0;
	cout << "Введите значение k: ";
	cin >> k;
	if (k <= 0 || k > 8) {
		cout << "Неверное значение!";
		return;
	}
	cout <<  endl <<"Введите значение l: ";
	cin >> l;
	if (l <= 0 || l > 8) {
		cout << "Неверное значение!";
		return;
	}
	cout << endl  << "Введите значение m: ";
	cin >> m;
	if (m <= 0 || m > 8) {
		cout << "Неверное значение!";
		return;
	}
	cout << endl << "Введите значение n: ";
	cin >> n;
	if (n <= 0 || n > 8) {
		cout << "Неверное значение!";
		return;
	}
    
	if (k == m || l == n) {
		cout << endl << "Слон угрожает фигуре, стоящей на: " << m << "," << n;
		return;
	}
	else {
		cout << endl << "Слон не угрожает фигуре, стоящей на: " << m << "," << n;
		return;
	}
	
}
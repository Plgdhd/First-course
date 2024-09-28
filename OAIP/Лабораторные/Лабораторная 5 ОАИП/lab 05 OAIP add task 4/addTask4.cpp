#include <iostream>

using namespace std;
void main() {
	setlocale(LC_CTYPE, "rus");
	int r = 0, p =0, q= 0;
	cout << "¬ведите радиус шара: ";
	cin >> r;
	cout << endl << "¬ведите первую диагональ ромба: ";
	cin >> p;
	cout << endl << "¬ведите вторую диагональ ромба: ";
	cin >> q;
	int a = sqrt(p * p + q * q) / 2;
	int s1 = 0.5 * p * q; //площадь ромба
	int s2 = 3.14 * pow(r, 2); //площадь окружности
	if (r <= p * q / 4 / a) {
		cout << endl <<  "Ўар пройдет";
	}
	else {
		cout << endl << "Ўар не пройдет";
	}
}
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
void main() {
	setlocale(LC_CTYPE, "Rus");
	int a = 0, b = 0, c = 0;
	cout << "������� ���������� �: ";
	cin >> a;
	cout << endl << "������� ���������� b: ";
	cin >> b;
	cout << endl << "������� ���������� �: ";
	cin >> c;
	int d = pow(b, 2) - (4 * a * c);
	if (d < 0) {
		cout << "������ ���";
		return;
	}
	else {
		int x1 = (-b - sqrt(d)) / 2 * a;
		int x2 = (-b + sqrt(d)) / 2 * a;
		cout << "������ ������: " << x1 << "  ������ ������: " << x2 << endl;
		return;
	}
}
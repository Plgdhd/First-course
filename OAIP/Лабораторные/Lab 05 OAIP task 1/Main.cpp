#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	setlocale(LC_CTYPE, "Russian");
	int a = 0, b = 0, c = 0;
	cout << "������� ����� �: ";
	cin >> a;
	cout << endl;
	cout << "������� ����� b: ";
	cin >> b;
	cout << endl;
	cout << "������� ����� �: ";
	cin >> c;
	cout << endl;
	if (a < b && b < c) {
		a = c;
		b = c;
	}
	else {
		if (a > b  && b > c) {
			cout << "a= " << a << " b= " << b << " c= " << c;
			return 0;
		}
		else {
			a = pow(a, 2);
			b = pow(b, 2);
			c = pow(c, 2);
		}
	}
	cout << "a= " << a << " b= " << b << " c= " << c;
	return 0;
}
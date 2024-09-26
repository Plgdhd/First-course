#include <iostream>

using namespace std;

int main() {
	int a, b, c;
	std::cin >> a >> b >> c;
	// a<b<c
	if (a < b && b < c) {
		a = c;
		b = c;
		std::cout << a << b << c << endl;
	}
	else if (a > b && b > c) {
		std::cout << a << b << c << endl;
	}
	else {
		a = pow(a, 2);
		b = pow(b, 2);
		c = pow(c, 2);
		std::cout << a << " " << b << " " << c << endl;
	}
	return 0;
}
#include <iostream>
using namespace std;
void main() {
	setlocale(LC_CTYPE, "rus");
	float a = 1.2, x = 2.5, m, w, v;
	int k = 3;
	for (m = 4.0; m < 6.1; m += 0.2) {
		if (x < m / 2) {
			w = sqrt(0.2 * x) * k;
		}
		else {
			w = exp(2 * x * k);
		}
		v = sqrt(pow(w, 3) + abs(x - a)) / log1p(1 + a);
		cout << "Значение m: " << m << endl;
		cout << "Значение w: " << w << endl;
		cout << "Значение v: " << v << endl;
		cout << endl;
	}
}
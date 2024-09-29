#include <iostream>
using namespace std;
void main() {
	setlocale(LC_CTYPE, "rus");
	float z, t = 6.96 * pow(10, -5) , y = 2, x = 0.9, q;
	for (float j = -2; j < 9; j+=0.2) {
		if (j == 9 || j == -1.4 || j == 5) {
			z = t * pow(y, 2) - sqrt(j + x) * tan(y);
			q = sqrt(pow(z, 2) + 5 * z) * log(y);
			cout << "Z â for = " << z << endl;
			cout << "q â for = " << q << endl;
		}
	}
	cout << endl;
	float i = 1;
	while ( i < 2) {
		
		z = t * pow(y, 2) - sqrt(i + x) * tan(y);
		q = sqrt(pow(z, 2) + 5 * z) * log(y);
		cout << "Z â while = " << z << endl;
		cout << "q â while = " << q << endl;
		cout << endl;
		i += 0.2;
	}

	i = 2;
	cout << endl;
	while (i < 3) {
		for (float j = 0; j < 9.1; j += 0.1) {
			if (j == 0.7 || j == 1 || j == 9) {
				z = t * pow(y, 2) - sqrt(i + x) * tan(y);
				q = sqrt(pow(z, 2) + 5 * z) * log(y);
				cout << "Z â for2 = " << z << endl;
				cout << "q â for2 = " << q << endl;
			}
		}
		i += 0.2;
	}
}
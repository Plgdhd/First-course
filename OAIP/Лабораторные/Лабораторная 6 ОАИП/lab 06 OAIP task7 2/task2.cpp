#include <iostream>
using namespace std;
void main(){
	setlocale(LC_CTYPE, "rus");
	float z, t = 6.96 * pow(10, -5), y = 2, x = 0.9, q;
	float i = 1;
	while (i < 2) {
		cout << "i=" << i << endl;
		z = t * pow(y, 2) - sqrt(i + x) * tan(y);
		q = sqrt(pow(z, 2) + 5 * z) * log(y);
		cout << "Z â while = " << z << endl;
		cout << "q â while = " << q << endl;
		cout << endl;
		i += 0.2;
	}
}
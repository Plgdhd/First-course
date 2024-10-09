#include <iostream>
#include <string>
using namespace std;
void main() {
	setlocale(LC_CTYPE, "rus");
	float z, t = 6.96 * pow(10, -5) , y = 2, x = 0.9, q;
	float fArray[] = { 9,1.4, 5 };
	for (int i = 0; i < 3; i++) {
			z = t * pow(y, 2) - sqrt(fArray[i] + x) * tan(y);
			q = sqrt(pow(z, 2) + 5 * z) * log(y);
			cout << "Z в for, при i = " << fArray[i] << " равно:" << z << endl;
			cout << "q в for, при i = " << fArray[i] << " равно:" << q << endl;
	}
	cout << endl;
}
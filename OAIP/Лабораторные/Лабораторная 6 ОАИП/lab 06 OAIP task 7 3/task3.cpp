#include <iostream>
using namespace std;
void main(){
	setlocale(LC_CTYPE, "rus");
	float z, t = 6.96 * pow(10, -5), y = 2, x = 0.9, q;
	float fArrayX[] = { 0.7, -1, 9 }, fArrayI[] = { 2.0, 2.2, 2.4, 2.6, 2.8, 3.0 };
	int i = 0;
	cout << endl;
	while (i < 6) {
		for (int j = 0; j < 3; j++) {
				z = t * pow(y, 2) - sqrt(fArrayI[i] + fArrayX[j]) * tan(y);
				q = sqrt(pow(z, 2) + 5 * z) * log(y);
				cout << "Z в for2, при X= " << fArrayX[j] << " и при i= " << fArrayI[i] << " равно: " << z << endl;
				cout << "q в for2, при X= " << fArrayX[j] << " и при i= " << fArrayI[i] << " равно: " << q << endl;
		}
		cout << endl;
	i++;
	}
}
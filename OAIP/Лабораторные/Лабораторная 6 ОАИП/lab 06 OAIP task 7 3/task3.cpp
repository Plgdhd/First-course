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
				cout << "Z � for2, ��� X= " << fArrayX[j] << " � ��� i= " << fArrayI[i] << " �����: " << z << endl;
				cout << "q � for2, ��� X= " << fArrayX[j] << " � ��� i= " << fArrayI[i] << " �����: " << q << endl;
		}
		cout << endl;
	i++;
	}
}
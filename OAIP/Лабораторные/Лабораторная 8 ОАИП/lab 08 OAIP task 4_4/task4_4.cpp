#include <iostream>
#define t 0.45;
using namespace std;
void main() {
	const float x[6] = { 1.1, 6.2, 3, -4, 6, 1 };
	float q = t;
	for (int i = 0; i < 6; i++) {
		q += (x[0] + 1) / x[i];
	}
	cout << "q = " << q << endl;
}
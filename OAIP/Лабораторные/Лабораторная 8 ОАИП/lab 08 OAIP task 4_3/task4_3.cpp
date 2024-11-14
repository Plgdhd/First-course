#include <iostream>
using namespace std;
void main() {
	const int x[6] = { 7,2,5,7,6,11 };
	int z = x[0];
	for (int i = 1; i < 6; i++) {
		if (x[i] > z) {
			z = x[0];
		}
	}
	int sum = 0;
	for (int i = 1; i < 6; i++) {
		sum += pow(x[i], 3);
	}
	int y = z * sum;
	cout << "z= " << z << endl;
	cout << "y= " << y;
}
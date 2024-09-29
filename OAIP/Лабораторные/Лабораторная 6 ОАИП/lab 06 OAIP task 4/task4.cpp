#include <iostream>
#include <iomanip>
using namespace std;
void main() {
	float x = 3, y, z;
	do {
		z = 2 * x * x;
		y = z + pow(x, (float)1 / 3);
		for (int i = 0; i < 3; i++) {
			if (i == 1) {
				cout << endl;
				cout << setw(5 * i) << setfill('-') << '-' << endl;
			}
		}
		printf("x = %f\t", x);
		printf("y = %f\n", y);
		x += 0.1;
	} while (x < 4.1);
}
#include <iostream>
using namespace std;
void main() {
	float x = 3, y, z;
	do {
		z = 2 * x * x;
		y = z + pow(x, (float)1 / 3);
		printf("x = %f\t", x);
		printf("y = %f\n", y);
		x += 0.1;
	} while (x < 4.1);
}
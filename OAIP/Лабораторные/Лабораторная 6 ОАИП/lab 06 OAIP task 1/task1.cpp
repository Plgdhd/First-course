#include <iostream>
using namespace std;
void main() {
	setlocale(LC_CTYPE, "rus");
	float z, y, x, sd;
	sd = 1.0 / 3.0;
	for (int i = 0; i < 4; i++) {
		printf("¬ведите х");
		scanf_s("%f", &x);
		z = 2 * pow(x, 2);
		y = z + pow(x, sd);
		printf("x =  %ff\t", x);
		printf("y = %f\n", y);
	}
}
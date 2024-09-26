
#include <iostream>
#include <math.h>
using namespace std;

void main() {
	double t, u, k = 4, a = 4.1, x = 5e-5;
	t = 2 * tan(k) / a + log(3 + x) + exp(x);
	u = sqrt(t + 1) - sin(x) * cos(t);
	std::cout << "t=" << t << endl;
	std::cout << "u=" << u << endl;
}
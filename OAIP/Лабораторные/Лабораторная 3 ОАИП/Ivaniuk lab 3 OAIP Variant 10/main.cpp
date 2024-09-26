#include <iostream>
#include <math.h>
using namespace std;
int main() {
	float e = 2.7118;
	float z = 1.7;
	int n = 3, m = 3;
	float a = 4 * pow(10, -8);
	float y = (z + log(z)) / (exp(-3) + sqrt(a));
	float s = (2 + n * m) / log(1 + z);
	std::cout << "y=" << y << " " << "s=" << s << endl;
	return 0;
}
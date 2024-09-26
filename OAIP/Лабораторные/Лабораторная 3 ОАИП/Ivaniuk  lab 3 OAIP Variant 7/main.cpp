#include <iostream>
#include <math.h>
using namespace std;

int main(){
	float x = 1.4;
	float m = 6; 
	float e = 2.7118;
	float z = 0.05 * pow(10, 5);
	float y = sqrt(1 + x) - cos(2/m);
	float w = 0.6 * z - 2 * exp( - 2 * y * m);
	std::cout << "y=" << y << " " << "w=" << w << endl;
	return 0;
}
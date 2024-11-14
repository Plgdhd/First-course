#include <iostream>
#include "Header.h"
using namespace std;
void main() {
	setlocale(LC_ALL, "rus");
    float array[5] = { 5.1, 6.4, 3, 2,6 };
	int a = minInArray(array, 5);
	float c = findC(array, 5, a);
	cout << "Значение С равняется: " << c;
}
#include <iostream>
#include "maxMinMethods.h"
using namespace std;
void main() {
	setlocale(LC_CTYPE, "rus");
	int n = 0;
	cout << "¬ведите длину последовательности: ";
	cin >> n;
	float* array = new float[n];
	int imax = 0, imin = 0;
	for (int i = 0; i < n; i++) {
		cout << "\n¬ведите число последовательности по номеру " << i << ": ";
		cin >> array[i];
	}
	imin = minInArray(array, n);
	imax = maxInArray(array, n);
	float sum = sumBetweenMinMax(array, n, imin, imax);
	cout << "—умма чисел между минимальным и максимальным равна: " << sum;
	delete[] array;
}
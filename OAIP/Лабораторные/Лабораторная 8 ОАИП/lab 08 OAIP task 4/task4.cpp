#include <iostream>
using namespace std;
void main() {
	setlocale(LC_CTYPE, "rus");
	const int n = 5;
	const float array[5] = { 2.7, -5, 4, 3.5, -7 };
	float sum = 0, p = 1;
	for (int i = 0; i < n; i++) {
		if (array[i] > 0) {
			sum += array[i];
		}
		else {
			p *= array[i];
		}
	}
	cout << "Сумма положительных чисел последовательности равна: " << sum;
	cout << "\nПроизведение отрицательных элементов равно: " << p;
}
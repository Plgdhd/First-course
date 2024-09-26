#include <iomanip>
#include <iostream>
#include <stdio.h>
using namespace std;
void main() {
	setlocale(LC_CTYPE, "Rus");
	int C;
	cout << "¬ведите длину окружности: ";
	scanf_s("%d", &C);
	float s;
	int r;
	r = C / 2 * 3.14;
	s = 3.14 * r * r;
	cout << "ѕлощадь круга равна: " << s;
}
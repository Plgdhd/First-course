#include <iostream>
#include <string>
using namespace std;
void main() {
	setlocale(LC_ALL, "rus");
	int n, m, number, result;
	cout << "¬ведите значение n: ";
	cin >> n;
	cout << "¬ведите значение m: ";
	cin >> m;
	cout << "„исла, квардрат суммы цифр которых равен m: ";
	for (int i = 1; i < n; i++) {
		int sum = 0;
		number = i;
		result = i;
		while (number != 0) {
			sum += number % 10;
			number /= 10;
		}
		if (pow(sum, 2) == m) {
			cout << result << " ";
		}
	}

}
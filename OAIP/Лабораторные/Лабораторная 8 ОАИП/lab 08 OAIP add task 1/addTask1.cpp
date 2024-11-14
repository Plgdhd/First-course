#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "rus");
	int n = 0;
	cout << "¬ведите количество чисел в последовательности: ";
	cin >> n;
	int b = 0, sum = 0;
	for (int i = 0; i < n; i++) {
		cout << "\n¬ведите число последовательности под номером " << i << ": ";
		cin >> b;
		if (b % 2 == 0) {
			sum += b;
		}
	}
	cout << endl << "—умма четных элементов равна: " << sum;
}
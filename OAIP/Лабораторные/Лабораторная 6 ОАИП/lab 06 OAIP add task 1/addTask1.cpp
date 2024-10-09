#include <iostream>

using namespace std;
void main() {
	setlocale(LC_CTYPE, "rus");
	float p;
	cout << "Введите сумму за первый день(P): ";
	cin >> p;
	cout << "Введите сумму, которую нужно превысить(Q): ";
	float q;
	int days = 1;
	cin >> q;
	while (true) {
		p += (3 * p) / 100;
		days++;
		if (p > q) {
			break;
		}
	}
	cout << "Выручка превысила заданную на " << days << " день и составила: " << p;
}
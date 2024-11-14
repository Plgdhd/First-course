#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "rus");
	float a, sum = 0;
	int p = 1;
	const int size = 4;
	for (int i = 0; i < size; i++) {
		cout << "Введите а" << i+1 << ": ";
		cin >> a;
		sum+=pow(a, 2);
		p *= a;
		
	}
	int factOf5 = 1;
	for (int i = 1; i <= 5; i++) {
		factOf5 *= i;
	}
	cout << "Сумма квадратов: " << sum << endl;
	cout << "Произведение всех а: " << p << endl;
	cout << "Факториал 5: " << factOf5 << endl;
}

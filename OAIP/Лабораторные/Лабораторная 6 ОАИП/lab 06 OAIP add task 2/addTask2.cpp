#include <iostream>
#include <string> 
using namespace std;
void main() {
	setlocale(LC_CTYPE, "rus");
	int n = 0;
	cout << "Введите количество лет: ";
	cin >> n;
	float* array = new float[n];
	for (int i = 0; i < n; i++) {
		cout << "Введите стоимость оборудования за " << i+1 << "-й год: ";
		cin >> array[i];
	}
	int p = 0;
	float sum = 0;
	cout << "Введите процент уценивания с каждым годом(P): ";
	cin >> p;
	for (int i = 0; i < n; i++) {
		sum -= (sum * p) / 100;
		sum += array[i];
	}
	cout << "Стоимость оборудования после " << n << " лет равна: " << sum;
}
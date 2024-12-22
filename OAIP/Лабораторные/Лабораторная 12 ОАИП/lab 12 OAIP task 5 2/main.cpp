#include <iostream>
#include <string>
using namespace std;

void main() {
	setlocale(LC_ALL, "ru");
	int k = 0, count = 0;
	string N;
	cout << "Введите N: ";
	cin >> N;
	cout << "\nВведите k: ";
	cin >> k;
	for (int i = 0; i < N.length(); i++) {
		if (static_cast<int>(N[i] - '0') % k == 0 && static_cast<int>(N[i]) != 0) {
			count++;
		}
	}
	if (count == 0)
	{
		cout << "Совпадений нет!";
		return;
	}
	int* array = new int[count];
	int* A = array;

	cout << "\nПолученный массив: ";
	for (int i = 0, j = 0; i < N.length(); i++) {
		if ((static_cast<int>(N[i] - '0') % k) == 0 && static_cast<int>(N[i] - '0') != 0) {
			*(A + j) = static_cast<int>(N[i] - '0');
			j++;
		}
	}
	for (int i = 0; i < count; i++) {
		cout << *(A + i) << " ";
	}
	delete[] array;

}
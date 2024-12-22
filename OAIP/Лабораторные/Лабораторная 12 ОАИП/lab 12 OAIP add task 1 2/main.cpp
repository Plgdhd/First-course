#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	const int n = 20;
	int* array = new int[n];
	int* ptr = array;
	int sa = 0, tmp = 0, count = 20;
	cout << "Исходный массив: ";
	for (int i = 0; i < n; i++) {
		*(ptr + i) = rand() % 99;
		cout << *(ptr + i) << " ";
		sa += *(ptr + i);
	}
	sa /= n;
	cout << "\nПолученный массив: ";
	for (int i = 0; i <= n / 2; i++) {
		if (*(ptr + i) < sa) {
			continue;
		}
		else {
			for(int j = n -1 ; j > n / 2; j--) {
				if (*(ptr + j) < sa) {
					tmp = *(ptr + j);
					*(ptr + j) = *(ptr + i);
					*(ptr + i) = tmp;
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << *(ptr+i) << " ";
	}
	delete[] array;
}
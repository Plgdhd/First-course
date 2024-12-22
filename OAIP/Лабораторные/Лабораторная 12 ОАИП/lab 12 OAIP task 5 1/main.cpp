#include <iostream>
using namespace std;

void main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	cout << "¬ведите n: ";
	int n = 0;
	cin >> n;
	int* array = new int[n];
	int* A = array;
	for (int i = 0; i < n; i++) {
		*(A + i) = rand() % 99;
		cout << *(A + i) << " ";
	}
	int k = 0;
	cout << "¬ведите k: ";
	cin >> k;
	cout << "\nЁлементы равные k под номерами: ";
	int* ptrK = &k;
	for (int i = 0; i < n; i++) {
		if (*(A + i) == *ptrK) {
			cout << i << " ";
		}
	}
	cout << "\nЁлементы большие k под номерами: ";
	for (int i = 0; i < n; i++) {
		if (*(A + i) > *ptrK) {
			cout << i << " ";
		}
	}
	cout << "\nЁлементы меньше k под номерами: ";
	for (int i = 0; i < n; i++) {
		if (*(A + i) < *ptrK) {
			cout << i << " ";
		}
	}
	delete array;
}
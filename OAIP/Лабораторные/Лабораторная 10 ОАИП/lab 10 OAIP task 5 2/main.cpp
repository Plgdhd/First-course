#include <iostream>
#include <ctime>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	int n = 0, rmn = 0, rmx = 99;
	cout << "¬ведите размер массива: ";
	cin >> n;
	int* array = new int[n];
	if (n < 1 || n > 99) {
		return 0;
	};
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++) {
		array[i] = rand() % 100;
		cout << array[i] << " ";
	}
	cout << "\n";
	int k;
	for (int i = n-1, j = 0; i >= n/2, j< n/2; i--, j++) {
		k = array[i];
		array[i] = array[j];
		array[j] = k;
	}
	for (int i = 0; i < n; i++) {
		cout << array[i] << " ";
	}
	delete[] array;
	return 0;
}
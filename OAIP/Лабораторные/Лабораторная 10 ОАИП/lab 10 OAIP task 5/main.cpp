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
	int count = 0, min = array[0], s = 0;
	for (int i = 0; i < n; i++) {
		if (array[i] < min) {
			min = array[i];
		}
		s += array[i];
	}
	for (int i = 0; i < n; i++) {
		if (array[i] == min) {
			count++;
		}
	}
	int sa = s / n;
	int* arrayAnswer = new int[n - count + 3];
	for (int i = 0, j = 0; i < n - count + 3, j <n; i++) {
		if (i < 3) {
			arrayAnswer[i] = sa;
			cout << arrayAnswer[i] << " ";
			continue;
		}
		if (array[j] == min) {
			j++;
			i--;
			continue;
		}
		arrayAnswer[i] = array[j];
		cout << arrayAnswer[i] << " ";
		j++;
	}
	delete[] array;
	delete[] arrayAnswer;
	return 0;
}
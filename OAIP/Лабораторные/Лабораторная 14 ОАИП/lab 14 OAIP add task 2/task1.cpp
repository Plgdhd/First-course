#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int array[5][5];
	cout << "Полученный массив: \n";
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == j) {
				array[i][j] = i+1;
				cout << array[i][j] << " ";
				continue;
			}
			array[i][j] = rand() % 5;
			cout << array[i][j] << " ";
		}
		cout << "\n";
	}
}
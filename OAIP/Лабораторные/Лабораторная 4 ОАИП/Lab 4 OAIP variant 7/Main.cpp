#include <iomanip> 
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	setlocale(LC_CTYPE, "Russian");
	char element;
	cout << "Введите элемент для заполнения трапеции: ";
	cin >> element;
	cout << endl << "Введите количество высоту трапеции: ";
	int height = 0;
	cin >> height;
	cout << endl << "Введите длину основания трапеции: ";
	int length = 0;
	cin >> length;
	cout << endl;
	char** array = new char*[height];

	for (int k = 0; k < height; k++) {
		array[k] = new char[length];
	}

	int limit1 = (length / 4) + 3; 
	int limit2 = ( (length * 3) / 4)-2;

	for (int i = 0; i <= height; i++ , limit1--  , limit2++) {
		printf("\t\t\t\t\t\t");
		for (int j = 0; j < length; j++) {
			if (limit1 >= 0 && limit2 <= length - 1) {
				if (j >= limit1 && j <= limit2) {
					array[i][j] = element;
				}
				else {
					array[i][j] = ' ';
				}

			}
			else {
				array[i][j] = ' ';
			}
			cout << array[i][j];
		}
		cout << endl;
	}

	for (int d = 0; d < height; d++) {
		delete[] array[d];
	}
	delete[] array;
	return 0;
}


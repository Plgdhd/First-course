#include <iostream>
#include <time.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int array[10];
	for (int i = 0; i < 10; i++) {
		array[i] = rand() % 99;
	}
	for (int i = 0; i < 10; i++) {
		cout << array[i] << " ";
	}
	int imax = 0, max = array[0];
	for (int i = 0; i < 10; i++) {
		if (array[i] > max) {
			max = array[i];
			imax = i;
		}
	}
	cout << "\nМаксимальный элемент: " << max << " по индексу: " << imax;
	/*int* A = array;
	for (int i = 0; i < 10; i++) {
		*(A + i) = rand() % 99;
	}
	cout << endl;
	for (int i = 0; i < 10; i++) {
		cout << *(A+i) << " ";
	}
	int* imax = array;
	int* max = array;
	for (int i = 0; i < 10; i++) {
		if (*(A + i) > *max) {
			*imax = i;
			max = A + i;
		}
	}
	cout << "\nМаксимальный элемент: " << *max << " под индексом: " << *imax;
	*/
}

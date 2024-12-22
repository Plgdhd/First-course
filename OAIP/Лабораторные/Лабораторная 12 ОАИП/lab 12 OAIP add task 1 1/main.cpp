#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "ru");
	int n = 0, count = 0;
	cout << "Введите n: ";
	cin >> n;
	int* array = new int[n];
	int* ptrArr = array;
	for (int i = 0; i < n; i++) {
		cout << "\nВведите элемент массива под номером " << i + 1 << " : ";
		cin >> *(ptrArr + i);
	}
	bool isTrue;
	int* unique = new int[n];
	int* ptrUni = unique;
    for (int i = 0; i < n; ++i) {
        isTrue = true;
        for (int j = 0; j < count; ++j) {
            if (*(ptrArr+i) == *(ptrUni+j)) {
                isTrue = false;
                break;
            }
        }
        if (isTrue) {
            *(ptrUni+count) = *(ptrArr+i);
            count++;
        }
    }
	cout << "Количество различных элементов: "  << count;
	delete[] array;
}
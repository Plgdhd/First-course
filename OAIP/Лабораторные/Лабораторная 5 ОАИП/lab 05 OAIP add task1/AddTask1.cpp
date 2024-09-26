#include <iostream>
using namespace std;
void main() {
	setlocale(LC_CTYPE, "Rus");
	int array[3];
	int s = 0;
	for (int i = 0; i < 3; i++) {
		cout << "Введите число: ";
		cin >> array[i];
		array[i] % 5 == 0 ? s += array[i] : s += 0;
		cout << endl;
	}
	bool answer;
	s == 0 ? answer = true  : answer = false;
	switch (answer) {
	case true:
		cout << "Error" << endl;
		break;
	case false:
		cout << "Сумма чисел, кратных пяти: " << s << endl;
		break;
	}
	
}
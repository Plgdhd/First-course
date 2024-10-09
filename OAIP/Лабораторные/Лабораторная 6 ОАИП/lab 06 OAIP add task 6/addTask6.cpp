#include <iostream>
#include <string>
using namespace std;
void main() {
	setlocale(LC_CTYPE, "rus");
	string number;
	cout << "¬ведите число: ";
	cin >> number;
	string result[16];
	int indexOfResult = 0;
	for (int i = 0; i < number.length(); i++) {
		if (number[i] == '3' || number[i] == '6') {
			continue;
		}
		result[indexOfResult] += number[i];
		indexOfResult++;
	}
	cout << "„исло без 3 и 6: ";
	for (int i = 0; i < indexOfResult; i++) {
		cout << result[i];
	}
}
#include <iostream>
#include <iomanip> 
using namespace std;
void main() {
	setlocale(LC_CTYPE, "rus");
	int number;
	cout << "������� ���: ";
	cin >> number;
	if (number % 4 == 0 && number % 100 != 0 || number % 400 == 0) {
		cout << "��� �������� ����������";
	}
	else {
		cout << "��� �� �������� ����������!";
	}
	return;
}
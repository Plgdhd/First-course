#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;
void main() {
	setlocale(LC_CTYPE, "Russian");
	int t; 
	cout << "������� t=";
	cin >> t;
	cout << "t=" << t << endl;
	cout << "��� : ������ � ������" << endl;
	cout << "int: " << sizeof(int) << endl;
	cout << "char: " << sizeof(char) << endl;
	cout << "float: " << sizeof(float) << endl;
	cout << "double: " << sizeof(double) << endl;
   int testInt;
	float testFloat;
	char testChar;
	double testDouble;
	cout << "������� int: ";
	cin >> testInt;
	cout << endl << "������� float: ";
	cin >> testFloat;
	cout << endl << "������� char: ";
	cin >> testChar; 
	cout << "������� double: ";
	cin >> testDouble;
	while (true) {
		cout << "�������� ��� ��� ������: \n 1 -- int \n 2 -- double \n 3 -- char \n 4 -- float \n 5 -- �����\n��� �����:";
		int answer = 0;
		cin >> answer;
		cout << "�����: ";
		switch (answer) {
		case 1:
			cout << testInt;
			break;
		case 2:
			cout << testDouble;
			break;
		case 3:
			cout << testChar;
			break;
		case 4:
			cout << testFloat;
		case 5:
			return;
		default:
			cout << "������ �����!" << endl;

		}

	}
	
}

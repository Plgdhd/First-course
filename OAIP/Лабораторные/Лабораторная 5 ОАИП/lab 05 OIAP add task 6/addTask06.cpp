#include <iostream>

using namespace std;
void main() {
	//��� �������� ��������
	setlocale(LC_CTYPE, "rus");
	cout << "������� ���������� x ������: ";
	int xKing = 0;
	cin >> xKing;
	cout << endl << "������� ���������� y ������: ";
	int yKing = 0;
	cin >> yKing;
	cout << endl << "������� ���������� x �����: ";
	int xRook = 0;
	cin >> xRook;
	cout << endl << "������� ���������� y �����: ";
	int yRook = 0;
	cin >> yRook;
	cout << endl << "������� ���������� � �����: ";
	int xEleph = 0;
	cin >> xEleph;
	cout << endl << "������� ���������� y �����: ";
	int yEleph = 0;
	cin >> yEleph;
	if (xKing == xRook || yKing == yRook) {
		cout << endl << "������ ������ �� �����!";
	}
	else if (((xEleph- xKing) == (yEleph- yKing)) || ((xKing - xEleph) == (yEleph - yKing))){
		cout << endl << "������ �������� ����!";
	}
	else {
		cout << endl << "������ ������ �� ��������.";
	}
}
#include <iomanip>
#include <iostream>
void main() {
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	char c, probel;
	probel = ' ';
	cout << "������� ������: ";
	cin >> c;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(10) << setfill(c) << endl;
	cout << setw(34) << setfill(probel) << probel;
	cout << setw(12) << setfill(c) << c << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(14) << setfill(c) << c << endl;

	int number;
	cout << "������� ����� �����: ";
	cin >> number;
	float second_number;
	cout << "������� ������������ �����: ";
	cin >> second_number;
	cout << "����� ����� � ���������������� �������������: " << setbase(2) << hex << number << endl;
	cout << "������������ ����� � ������������ � ��� �����: " << setprecision(2) << second_number << endl;
}
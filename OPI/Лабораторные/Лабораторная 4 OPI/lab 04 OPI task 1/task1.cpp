#include <iostream>
using namespace std;
void main() {
	setlocale(LC_CTYPE, "rus");
	double bank = 0;
	cout << "������� ���� ������: ";
	cin >> bank;
	while (true) {
		cout << "��� ������:" << bank << " ����� ��������� ������ ��������?\n�������� ������� 1-4:\n1-������\n2-������ ��� ����\n3-��������\n4-� ��������(a) �������\n��� �����: ";
		int answer = 0, choice = 0;
		bool fort = true;
		cin >> answer;
		switch (answer) {
		case 1:
			fort = true;
			while (fort) {
				cout << endl << "��� ������ ����������?\n�������� ������� 1-4\n1-�������� (���������: 30 ���.\n2-����� (���������: 60 ���)\n3-����� (���������: 90 ���.)\n4-��������� � ������ ���������\n��� �����: ";
				cin >> choice;
				switch (choice) {
				case 1:
					if (bank >= 30) {
							bank -= 30;
					}
					else {
						cout << "������������ �������!";
					}
					break;
				case 2:
					if (bank >= 60) {
						bank -= 60;
					}
					else {
						cout << "������������ �������!";
					}
					break;
				case 3:
					if (bank >= 90) {
						bank -= 90;
					}
					else {
						cout << "������������ �������!";
					}
					break;
				case 4:
					choice = 0;
					fort = false;
				}
			}
			break;
		case 2:
			fort = true;
			while (fort) {
				cout << endl << "��� ������ ����������?\n�������� ������� 1-4\n1-����� (���������: 30 ���.\n2-������� (���������: 260 ���)\n3-������ (���������: 10 ���.)\n4-��������� � ������ ���������\n��� �����: ";
				cin >> choice;
				switch (choice) {
				case 1:
					if (bank >= 30) {
						bank -= 30;
					}
					else {
						cout << "������������ �������!";
					}
					break;
				case 2:
					if (bank >= 260) {
						bank -= 260;
					}
					else {
						cout << "������������ �������!";
					}
					break;
				case 3:
					if (bank >= 10) {
						bank -= 10;
					}
					else {
						cout << "������������ �������!";
					}
					break;
				case 4:
					choice = 0;
					fort = false;
				}
			}
			break;
		case 3:
			fort = true;
			while (fort) {
				cout << endl << "��� ������ ����������?\n�������� ������� 1-4\n1-������ (���������: 2.50 ���.\n2-����� (���������: 2.10 ���)\n3-���� (���������: 2 ���.)\n4-��������� � ������ ���������\n��� �����: ";
				cin >> choice;
				switch (choice) {
				case 1:
					if (bank >= 2.5) {
						bank -= 2.5;
					}
					else {
						cout << "������������ �������!";
					}
					break;
				case 2:
					if (bank >= 2.10) {
						bank -= 2.10;
					}
					else {
						cout << "������������ �������!";
					}
					break;
				case 3:
					if (bank >= 2.0) {
						bank -= 2.0;
					}
					else {
						cout << "������������ �������!";
					}
					break;
				case 4:
					choice = 0;
					fort = false;
				}
			}
			break;
		case 4:
			return;
		default:
			cout << "�������� ��������!\n";
			break;
		}
	}
	cout << endl <<"���� �����: " << bank;
}
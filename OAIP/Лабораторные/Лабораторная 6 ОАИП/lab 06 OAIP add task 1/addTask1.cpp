#include <iostream>

using namespace std;
void main() {
	setlocale(LC_CTYPE, "rus");
	float p;
	cout << "������� ����� �� ������ ����(P): ";
	cin >> p;
	cout << "������� �����, ������� ����� ���������(Q): ";
	float q;
	int days = 1;
	cin >> q;
	while (true) {
		p += (3 * p) / 100;
		days++;
		if (p > q) {
			break;
		}
	}
	cout << "������� ��������� �������� �� " << days << " ���� � ���������: " << p;
}
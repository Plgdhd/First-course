#include <iostream>

using namespace std;
void main() {
	setlocale(LC_CTYPE, "rus");
	int r = 0, p =0, q= 0;
	cout << "������� ������ ����: ";
	cin >> r;
	cout << endl << "������� ������ ��������� �����: ";
	cin >> p;
	cout << endl << "������� ������ ��������� �����: ";
	cin >> q;
	int a = sqrt(p * p + q * q) / 2;
	int s1 = 0.5 * p * q; //������� �����
	int s2 = 3.14 * pow(r, 2); //������� ����������
	if (r <= p * q / 4 / a) {
		cout << endl <<  "��� �������";
	}
	else {
		cout << endl << "��� �� �������";
	}
}
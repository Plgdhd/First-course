#include <iostream>
using namespace std;
void main() {
	setlocale(LC_CTYPE, "rus");
	int m = 0, n = 0, k = 0, l =0;
	cout << "������� �������� k: ";
	cin >> k;
	if (k <= 0 || k > 8) {
		cout << "�������� ��������!";
		return;
	}
	cout <<  endl <<"������� �������� l: ";
	cin >> l;
	if (l <= 0 || l > 8) {
		cout << "�������� ��������!";
		return;
	}
	cout << endl  << "������� �������� m: ";
	cin >> m;
	if (m <= 0 || m > 8) {
		cout << "�������� ��������!";
		return;
	}
	cout << endl << "������� �������� n: ";
	cin >> n;
	if (n <= 0 || n > 8) {
		cout << "�������� ��������!";
		return;
	}
    
	if (k == m || l == n) {
		cout << endl << "���� �������� ������, ������� ��: " << m << "," << n;
		return;
	}
	else {
		cout << endl << "���� �� �������� ������, ������� ��: " << m << "," << n;
		return;
	}
	
}
#include <iostream>
#include <string> 
using namespace std;
void main() {
	setlocale(LC_CTYPE, "rus");
	int n = 0;
	cout << "������� ���������� ���: ";
	cin >> n;
	float* array = new float[n];
	for (int i = 0; i < n; i++) {
		cout << "������� ��������� ������������ �� " << i+1 << "-� ���: ";
		cin >> array[i];
	}
	int p = 0;
	float sum = 0;
	cout << "������� ������� ���������� � ������ �����(P): ";
	cin >> p;
	for (int i = 0; i < n; i++) {
		sum -= (sum * p) / 100;
		sum += array[i];
	}
	cout << "��������� ������������ ����� " << n << " ��� �����: " << sum;
}
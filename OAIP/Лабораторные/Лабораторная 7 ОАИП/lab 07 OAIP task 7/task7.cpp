#include <iostream>
#include <string>
using namespace std;
void main() {
	setlocale(LC_ALL, "rus");
	int n, m, number, result;
	cout << "������� �������� n: ";
	cin >> n;
	cout << "������� �������� m: ";
	cin >> m;
	cout << "�����, �������� ����� ���� ������� ����� m: ";
	for (int i = 1; i < n; i++) {
		int sum = 0;
		number = i;
		result = i;
		while (number != 0) {
			sum += number % 10;
			number /= 10;
		}
		if (pow(sum, 2) == m) {
			cout << result << " ";
		}
	}

}
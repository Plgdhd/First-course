#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "rus");
	int n = 0;
	cout << "������� ����� ������������������: ";
	cin >> n;
	int* array = new int[n];
	int answer = 0;
	for (int i = 0; i < n; i++) {
		cout << "\n������� ����� ������������������ �� ������ " << i << ": ";
		cin >> array[i];
		if (array[i] < 0) {
			answer = i;
		}
	}
	delete[] array;
	cout << endl << "��������� ������������� ������� ��������� �� ������: " << answer;
}
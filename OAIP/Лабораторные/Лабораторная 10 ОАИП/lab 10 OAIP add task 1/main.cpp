#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "rus");
	int n = 0, answer = 0, s = 0, sa = 0;
	cout << "������� ���������� ������: ";
	cin >> n;
	cout << "������� ���������� ������� �� �������: ";
	int* clouds = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> clouds[i];
	}
	int max = clouds[0], imax = 0;
	for (int i = 0; i < n; i++) {
		if (clouds[i] > max){
			imax = i;
			max = clouds[i];
		}
	}
	cout << "���������� ���������� ������� ������ �� " << imax+1 << "-� ������";
}
#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Russian");
	int i, k, size = 4;
	float massivA[] = { 5, -4, 17.1, 9, 1 }, sum = 0;
	cout << "������� ����� �������� (�� 0 �� 4)";
	cin >> k;
	for (i = k; i <= size; i++)
		massivA[i] = massivA[i + 1];
	size--;
	for (i = 0; i <= size; i++) {
		sum += massivA[i];
		cout << massivA[i] << endl;
	}
	cout << "\n\n������� �����.= " << sum / (size + 1);
}

#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	int count = 5, n = 1;
	float b, m = 9999;
	for (int i = 0; i < count; i++)
	{
		cout << endl <<  "Введите b" << i << ": ";
		cin >> b;
		if (b < m)
		{
			m = b;
			n = i;
		}
	}
	cout << "Минимальное значение в b равно " << m << " по номеру " << n << endl;
}

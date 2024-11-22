#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Russian");
	const int maxSize = 30;
	int n, i, kmax = 0, kmin = 0;
	int a[maxSize];
	cout << "Введите размер массива (<30)" << endl;
	cin >> n;
	if (n > 30)
		return;
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 30;
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		if (a[i] > a[kmax])
			kmax = i;
		if (a[i] < a[kmin])
			kmin = i;
	}
	cout << "Максимальный элемент " << a[kmax] << endl;
	cout << "Минимальный элемент " << a[kmin] << endl;
}

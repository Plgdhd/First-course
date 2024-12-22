#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	const int n = 2, m = 4;
	int B[n][m];
	int i, j, row = 0, column = 0;
	cout << "Введите элементы массива(8):" << endl;
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			cin >> B[i][j];
	int min = B[0][0];
	cout << " Исходный массив:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "\n";
		for (int j = 0; j < m; j++)
			cout << "B[" << i << "," << j << "] =" << B[i][j] << "\t";
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		min = B[i][0];
		for (int j = 1; j < m; j++) {
			if (min > B[i][j])
			{
				min = B[i][j];
				column = i;
				row = j;
			}
		}
		cout << "Минимальный элемент cтроки " <<column<<  "= " << min << endl;
	}
}


#include <iostream>
using namespace std;
int sum(int& x)
{
	int* p = &x, res = 0;
	for (int i = 0; i < 5; i++)
		res += p[i];
	return res;
}

int main()
{
	int mas[5], i;
	for (i = 0; i < 5; i++)
	{
		mas[i] = i * i;
		cout << mas[i] << ' ';
	}
	cout << endl << "result=" << sum(*mas) << endl;
}

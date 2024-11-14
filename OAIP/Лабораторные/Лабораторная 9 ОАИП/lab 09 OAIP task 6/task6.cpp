#include <iostream>
using namespace std;
double FunctionX(double x) {
	return pow(x,3) + x - 3;
}
double dichom(double a, double b, double e) {
    double x;
    do
    {
        x = (a + b) / 2;
        if ((FunctionX(x) * FunctionX(a)) <= 0)
            b = x;
        else
            a = x;

    } while (abs(a - b) >= 2 * e);
    return x;
}


void main() {
	double e = 0.0001, a = 0, b = 0;
	setlocale(LC_ALL, "rus");
	cout << "Введите а: ";
	cin >> a;
	cout << "Введите b: ";
	cin >> b;
    cout << "Метод дихтомии: " << dichom(a,b,e);

}
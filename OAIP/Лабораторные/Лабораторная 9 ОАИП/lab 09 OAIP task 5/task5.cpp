#include <iostream>
using namespace std;
//exp^X + 2
// ���� � �����
float FunctionX(int x) {
	return x*x*x - 3;
}
float Trapezia(float a, float b, int n) {
	float  h = (b - a) / n, s = 0, x=a;
	bool isTrue = true;

	while (isTrue) {
		s = s + h * (FunctionX(x) + FunctionX(x + h)) / 2;
		x += h;
		isTrue = (x <= (b - h)) ? true : false;
	}
	return s;
}
float Parabola(float a, float b, int n) {
	float h = (b - a) / (2 * n);
	float x = a + 2 * h, s1 = 1, s2 = 0;
	for (int i = 1; i < n; i++) {
		s2 += FunctionX(x);
		x += h;
		s1 += FunctionX(x);
		x += h;
	}
	return (h / 3) * (FunctionX(a) + 4 * FunctionX(a + h) + 4 * s1 + 2 * s2 + FunctionX(b));
}
int main() {
	setlocale(LC_ALL, "rus");
	cout << "������� ������� ������� a: ";
	float a = 0, b = 0, n = 0;
	cin >> a;
	cout << "\n������� ������� ������� b: ";
	cin >> b;
	cout << "\n������� �������� n: ";
	cin >> n;
	cout << "\n������� ������� ��������: " << Trapezia(a, b, n);
	cout << "\n������� ������� �������: " << Parabola(a, b, n);
	cout << "\n������� �e����� �������� � �������: " <<Parabola(a, b, n) - Trapezia(a, b, n);
	return 0;
}
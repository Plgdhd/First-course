#include <iostream>
#include <stdio.h> 
#include <iomanip>

using namespace std;
int main() {
    float x, y, z;
    setlocale(LC_CTYPE, "rus");

    // ���� ����� � ����������
    cout << "������� �������� x: ";
    scanf_s("%e", &x);
    cout << "������� �������� y: ";
    scanf_s("%e", &y);
    cout << "������� �������� z: ";
    scanf_s("%e", &z);

    // ���������� ��������
    float sum = x + y + z;
    float product = x * z * y;
    float maximum = max(sum, product);

    // ���������� ���������
    float minimum1 = min(x, y);
    float minimum2 = min(z, y);
    float minimum = min(minimum1, minimum2);

    // ����� ����������
    cout << " ��������: " << maximum  << "  �������: " << minimum << endl;

    return 0;
}
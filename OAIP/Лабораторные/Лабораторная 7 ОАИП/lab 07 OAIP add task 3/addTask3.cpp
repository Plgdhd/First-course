#include <iostream>
using namespace std;
void main() {
    setlocale(LC_ALL, "rus");
    double C1, C2;

    cout << "������� ���������� ���� � ������ ������ (C1): ";
    cin >> C1;
    cout << "������� ���������� ���� �� ������ ������ (C2): ";
    cin >> C2;

    for (int i = 1; i <= 12; ++i) {
        double halfC1 = C1 / 2.0;
        double halfC2 = C2 / 2.0;  
        C1 -= halfC1;
        C2 += halfC1;
        C2 -= halfC2;
        C1 += halfC2;
    }

    cout << "����� 12 �����������:" << endl;
    cout << "� ������ ������: " << C1 << " ������ ����" << endl;
    cout << "�� ������ ������: " << C2 << " ������ ����" << endl;
}

#include <iostream>
using namespace std;

void main() {
    setlocale(LC_CTYPE, "Russian");
    int A, n, p;
    char tmp[33]; 
    cout << "������� ����� A: ";
    cin >> A;
    cout << "������� ���������� ����� n: ";
    cin >> n;
    cout << "������� ������� p: ";
    cin >> p;
    int maskA = ((1 << n) - 1) << p;
    A = A | maskA;
    cout << "�����: ";
    _itoa_s(maskA, tmp,2);
    cout << tmp << endl;
    cout << "����� A ����� ��������� �����: ";
    _itoa_s(A, tmp,2);
    cout << tmp << endl;
    cout << "��������� (A): " << A << endl;
}

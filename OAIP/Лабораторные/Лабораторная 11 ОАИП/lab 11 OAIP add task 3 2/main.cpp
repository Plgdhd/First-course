#include <iostream>
using namespace std;

void main() {
    setlocale(LC_CTYPE, "Russian");
    int A, n, p;
    char tmp[33];
    cout << "������� ����� A: ";
    cin >> A;
    cout << "������� ���������� ��� n: ";
    cin >> n;
    cout << "������� ������� p: ";
    cin >> p;
    int maskA1 = (1 << n) - 1;
    int maskA2 = maskA1 << p;
    A = A | maskA2;
    _itoa_s(A, tmp, 2);
    cout << "����� A � �������� ���� ����� ��������� �����: " << tmp << endl;
    cout << "��������� A: " << A << endl;
}

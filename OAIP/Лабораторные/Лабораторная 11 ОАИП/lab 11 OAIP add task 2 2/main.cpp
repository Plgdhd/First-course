#include <iostream>
using namespace std;

void main() {
    setlocale(LC_CTYPE, "Russian");
    int A, B, n, m;
    char tmp[33];
    cout << "������� ����� A: ";
    cin >> A;
    cout << "������� ����� B: ";
    cin >> B;
    cout << "������� ������� n � A: ";
    cin >> n;
    cout << "������� ������� m � B: ";
    cin >> m;
    int maskA = (1 << 3) - 1;
    int bits = (A >> n) & maskA;
    int maskB = ~((1 << 3) - 1 << m);
    B = B & maskB;
    B = B | (bits << m);
    _itoa_s(A, tmp, 2);
    cout << "����� A � �������� ����: " << tmp << endl;
    _itoa_s(B & maskB, tmp, 2);
    cout << "����� B � �������� ����: " << tmp << endl;
    _itoa_s(bits, tmp, 2);
    cout << "����������� ���� �� A: " << tmp << endl;
    _itoa_s(B, tmp, 2);
    cout << "����� B � �������� ���� (����� ���������): " << tmp << endl;
    cout << "��������� B: " << B << endl;
}

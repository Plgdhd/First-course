#include <iostream>
using namespace std;

void main() {
    setlocale(LC_CTYPE, "Russian");
    int A;
    char tmp[33];
    cout << "������� ����� A: ";
    cin >> A;
    _itoa_s(A, tmp, 2);
    cout << "����� A � �������� ����: " << tmp << endl;
    int maskA = ((1 << (11 - 5)) - 1) << 4;
    _itoa_s(maskA, tmp, 2);
    cout << "����� (� 5 �� 10 ���): " << tmp << endl;
    int bits = (A & maskA) >> 4;
    int count = 0;
    while (bits) {
        count += bits & 1;
        bits >>= 1;
    }
    _itoa_s((A & maskA) >> 5, tmp, 33, 2);
    cout << "���������� ���� (� 5 �� 10): " << tmp << endl;
    cout << "���������� ������ � ����� � 5 �� 10: " << count << endl;
}

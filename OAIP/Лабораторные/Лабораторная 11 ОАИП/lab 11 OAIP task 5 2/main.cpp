#include <iostream>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "Rus");
    int A, B, n, p, m, q;
    char tmp[33];
    cout << "������� ����� A: ";
    cin >> A;
    cout << "������� ����� B: ";
    cin >> B;
    cout << "������� ���������� ����� n (�� A): ";
    cin >> n;
    cout << "������� ������� p (� A): ";
    cin >> p;
    cout << "������� ���������� ����� m (� B): ";
    cin >> m;
    cout << "������� ������� q (� B): ";
    cin >> q;
    int maskA = ((1 << n) - 1) << p;
    int bitsFromA = (A & maskA) >> p;
    int maskB = ~(((1 << m) - 1) << q);
    B = B & maskB;
    B = B | (bitsFromA << q);
    cout << "����� A � �������� ����: ";
    _itoa_s(A, tmp, 2); 
    cout << tmp << endl;
    cout << "����� B � �������� ���� (�� ���������): ";
    _itoa_s(B & ~((bitsFromA << q)), tmp,2);
    cout << tmp;
    cout << "\n����� �� A (���������� ����): ";
    _itoa_s(bitsFromA << q, tmp,2);
    cout << tmp;
    _itoa_s(B, tmp, 2);
    cout << "\n��������� (B): " << B << endl;
    return 0;
}

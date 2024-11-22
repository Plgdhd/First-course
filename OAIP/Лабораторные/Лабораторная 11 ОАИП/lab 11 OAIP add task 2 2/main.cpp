#include <iostream>
using namespace std;

void main() {
    setlocale(LC_CTYPE, "Russian");
    int A, B, n, m;
    char tmp[33];
    cout << "¬ведите число A: ";
    cin >> A;
    cout << "¬ведите число B: ";
    cin >> B;
    cout << "¬ведите позицию n в A: ";
    cin >> n;
    cout << "¬ведите позицию m в B: ";
    cin >> m;
    int maskA = (1 << 3) - 1;
    int bits = (A >> n) & maskA;
    int maskB = ~((1 << 3) - 1 << m);
    B = B & maskB;
    B = B | (bits << m);
    _itoa_s(A, tmp, 2);
    cout << "„исло A в двоичном виде: " << tmp << endl;
    _itoa_s(B & maskB, tmp, 2);
    cout << "„исло B в двоичном виде: " << tmp << endl;
    _itoa_s(bits, tmp, 2);
    cout << "»звлечЄнные биты из A: " << tmp << endl;
    _itoa_s(B, tmp, 2);
    cout << "„исло B в двоичном виде (после изменений): " << tmp << endl;
    cout << "–езультат B: " << B << endl;
}

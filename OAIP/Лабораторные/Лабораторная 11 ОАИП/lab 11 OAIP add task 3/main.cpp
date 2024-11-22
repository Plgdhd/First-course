#include <iostream>
using namespace std;

void main() {
    setlocale(LC_CTYPE, "rus");
    int A, B;
    char tmp[33];
    cout << "¬ведите число A: ";
    cin >> A;
    cout << "¬ведите число B: ";
    cin >> B;
    int maskA = (1 << 5) - 1;
    int bits = (A >> 1) & maskA;
    int maskB = ~((1 << 5) - 1 << 3);
    B = B & maskB;
    B = B | (bits << 3);
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

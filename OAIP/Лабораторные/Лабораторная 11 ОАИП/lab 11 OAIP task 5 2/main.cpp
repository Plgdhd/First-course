#include <iostream>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "Rus");
    int A, B, n, p, m, q;
    char tmp[33];
    cout << "¬ведите число A: ";
    cin >> A;
    cout << "¬ведите число B: ";
    cin >> B;
    cout << "¬ведите количество битов n (из A): ";
    cin >> n;
    cout << "¬ведите позицию p (в A): ";
    cin >> p;
    cout << "¬ведите количество битов m (в B): ";
    cin >> m;
    cout << "¬ведите позицию q (в B): ";
    cin >> q;
    int maskA = ((1 << n) - 1) << p;
    int bitsFromA = (A & maskA) >> p;
    int maskB = ~(((1 << m) - 1) << q);
    B = B & maskB;
    B = B | (bitsFromA << q);
    cout << "„исло A в двоичном виде: ";
    _itoa_s(A, tmp, 2); 
    cout << tmp << endl;
    cout << "„исло B в двоичном виде (до изменений): ";
    _itoa_s(B & ~((bitsFromA << q)), tmp,2);
    cout << tmp;
    cout << "\nћаска из A (выделенные биты): ";
    _itoa_s(bitsFromA << q, tmp,2);
    cout << tmp;
    _itoa_s(B, tmp, 2);
    cout << "\n–езультат (B): " << B << endl;
    return 0;
}

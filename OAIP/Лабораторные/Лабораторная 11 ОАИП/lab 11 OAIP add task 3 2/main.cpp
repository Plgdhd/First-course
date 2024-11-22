#include <iostream>
using namespace std;

void main() {
    setlocale(LC_CTYPE, "Russian");
    int A, n, p;
    char tmp[33];
    cout << "¬ведите число A: ";
    cin >> A;
    cout << "¬ведите количество бит n: ";
    cin >> n;
    cout << "¬ведите позицию p: ";
    cin >> p;
    int maskA1 = (1 << n) - 1;
    int maskA2 = maskA1 << p;
    A = A | maskA2;
    _itoa_s(A, tmp, 2);
    cout << "„исло A в двоичном виде после установки битов: " << tmp << endl;
    cout << "–езультат A: " << A << endl;
}

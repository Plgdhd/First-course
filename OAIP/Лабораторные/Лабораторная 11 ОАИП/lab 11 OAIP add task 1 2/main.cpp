#include <iostream>
using namespace std;

void main() {
    setlocale(LC_CTYPE, "Russian");
    int A, n, p;
    char tmp[33]; 
    cout << "Введите число A: ";
    cin >> A;
    cout << "Введите количество битов n: ";
    cin >> n;
    cout << "Введите позицию p: ";
    cin >> p;
    int maskA = ((1 << n) - 1) << p;
    A = A | maskA;
    cout << "Маска: ";
    _itoa_s(maskA, tmp,2);
    cout << tmp << endl;
    cout << "Число A после установки битов: ";
    _itoa_s(A, tmp,2);
    cout << tmp << endl;
    cout << "Результат (A): " << A << endl;
}

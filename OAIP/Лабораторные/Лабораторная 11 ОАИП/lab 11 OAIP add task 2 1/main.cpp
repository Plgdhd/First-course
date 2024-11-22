#include <iostream>
using namespace std;

void main() {
    setlocale(LC_CTYPE, "Russian");
    int A;
    char tmp[33];
    cout << "Введите число A: ";
    cin >> A;
    _itoa_s(A, tmp, 2);
    cout << "Число A в двоичном виде: " << tmp << endl;
    int maskA = ((1 << (11 - 5)) - 1) << 4;
    _itoa_s(maskA, tmp, 2);
    cout << "Маска (с 5 по 10 бит): " << tmp << endl;
    int bits = (A & maskA) >> 4;
    int count = 0;
    while (bits) {
        count += bits & 1;
        bits >>= 1;
    }
    _itoa_s((A & maskA) >> 5, tmp, 33, 2);
    cout << "Выделенные биты (с 5 по 10): " << tmp << endl;
    cout << "Количество единиц в битах с 5 по 10: " << count << endl;
}

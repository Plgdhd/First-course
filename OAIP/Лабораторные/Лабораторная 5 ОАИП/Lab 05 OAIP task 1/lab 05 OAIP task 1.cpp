#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    setlocale(LC_CTYPE, "rus");
    const double s = 1.1;
    const double x = 4 * pow(10, -3); 
    float j;
    double b; 
    float z;

    for (int i = 0; i < 5; i++) {
        cout << endl << "Введите значение j: ";
        cin >> j;
        b = s + (5 * x + j);
        if (j < 1.5) {
            z = sqrt(x + 0.3 * j) + b;
        }
        else {
            z = abs(x * j + b);
        }

        cout << "Для j = " << j << ", z = " << z << endl;
    }

    return 0;
}

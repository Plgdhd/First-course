#include <iostream>
#include <stdio.h> 
#include <iomanip>

using namespace std;
int main() {
    float x, y, z;
    setlocale(LC_CTYPE, "rus");

    // Ввод чисел с клавиатуры
    cout << "Введите значение x: ";
    scanf_s("%e", &x);
    cout << "Введите значение y: ";
    scanf_s("%e", &y);
    cout << "Введите значение z: ";
    scanf_s("%e", &z);

    // Вычисление значений
    float sum = x + y + z;
    float product = x * z * y;
    float maximum = max(sum, product);

    // Вычисление максимума
    float minimum1 = min(x, y);
    float minimum2 = min(z, y);
    float minimum = min(minimum1, minimum2);

    // Вывод результата
    cout << " Максимум: " << maximum  << "  Минимум: " << minimum << endl;

    return 0;
}
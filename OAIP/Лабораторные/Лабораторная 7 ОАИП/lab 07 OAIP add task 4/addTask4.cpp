#include <iostream>
using namespace std;

bool isOnlyTwo(int number) {
    int digit1 = number % 10; 
    number /= 10;
    int digit2 = number % 10;
    number /= 10;
    return ((number % 10 == digit1 || number % 10 == digit2) &&
        (number / 10  == digit1 || number / 10 == digit2));
}
int sumOfDigits(int number) {
    int sum = 0;
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}
void main() {
    setlocale(LC_ALL, "rus");
    for (int number = 1000; number <= 9999; ++number) {
        if (number % 2 == 0 && number % 7 == 0 && number % 11 == 0 && sumOfDigits(number) == 30) {
            if (isOnlyTwo(number)) {
                cout << "Найденный номер автомобиля: " << number << endl;
            }
        }
    }
}

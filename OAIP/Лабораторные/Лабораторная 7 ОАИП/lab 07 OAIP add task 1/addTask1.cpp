#include <iostream>
#include <cmath>
using namespace std;
bool isSimple(int num) {
    if (num < 2) return false;
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
bool isIncreasing(int num) {
    int lastDigit = num % 10;
    num /= 10;
    int midDigit = num % 10;
    num /= 10;
    int firstDigit = num; 
    return (firstDigit < midDigit && midDigit < lastDigit);
}

int main() {
    setlocale(LC_ALL, "rus");
    for (int i = 10; i * i < 1000; i++) {
        if (isSimple(i)) {
            int square = i * i;
            if (square >= 100 && square <= 999 && isIncreasing(square)) {
                cout << "Найдено число: " << square << ", квадратный корень: " << i << endl;
            }
        }
    }

    return 0;
}
#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    setlocale(LC_ALL, "ru");
    int k = 0; int n = 0;
    cout << "Введите k: ";
    cin >> k;
    cout << endl << "Введите n: ";
    cin >> n;
    int* x = new int[k];
    int* y = new int[n];
    int* ptrX = x;
    int* ptrY = y;
    cout << endl << "Введите массив x размером " << k << ": ";
    for (int i = 0; i < k; i++) {
        cin >> *(ptrX + i);
    }
    cout << endl <<  "Введите массив x размером " << n << ": ";
    for (int i = 0; i < n; i++) {
        cin >> *(ptrY + i);
    }
    int q = 0;
    cout << endl << "Введите q: ";
    cin >> q;
    cout << endl <<"Наиболее близкая сумма к " << q << ": ";
    int sum = x[0] + y[0]; 
    int difference = abs(sum - q); 
    for (int i = 0; i < k; ++i) {
        for (int j = 0; j < n; ++j) {
            int sumNow = x[i] + y[j];
            int differenceNow = abs(sumNow - q);
            if (differenceNow < difference) {
                difference = differenceNow;
                sum = sumNow;
            }
        }
    }
    cout << sum;
    return 0;
}

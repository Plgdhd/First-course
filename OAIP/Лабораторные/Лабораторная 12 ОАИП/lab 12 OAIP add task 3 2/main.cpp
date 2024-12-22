#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    setlocale(LC_ALL, "ru");
    int k = 0; int n = 0;
    cout << "������� k: ";
    cin >> k;
    cout << endl << "������� n: ";
    cin >> n;
    int* x = new int[k];
    int* y = new int[n];
    int* ptrX = x;
    int* ptrY = y;
    cout << endl << "������� ������ x �������� " << k << ": ";
    for (int i = 0; i < k; i++) {
        cin >> *(ptrX + i);
    }
    cout << endl <<  "������� ������ x �������� " << n << ": ";
    for (int i = 0; i < n; i++) {
        cin >> *(ptrY + i);
    }
    int q = 0;
    cout << endl << "������� q: ";
    cin >> q;
    cout << endl <<"�������� ������� ����� � " << q << ": ";
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

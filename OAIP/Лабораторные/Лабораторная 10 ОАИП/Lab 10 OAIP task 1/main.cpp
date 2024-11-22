#include <iostream>
#include <ctime>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    const int N = 100;
    int i, sz, A[N], rmn = 0, rmx = 99, sum = 0;
    cout << "Введите размер массива ";
    cin >> sz;
    cout << "Массив A:\n";
    srand((unsigned)time(NULL));
    for (i = 0; i < sz; i++) {
        A[i] = rmn + rand() % (rmx - rmn + 1);
        sum += A[i];
        cout << A[i] << endl;
    }
    cout << "\nСумма элементов массива = " << sum;
    return 0;
}

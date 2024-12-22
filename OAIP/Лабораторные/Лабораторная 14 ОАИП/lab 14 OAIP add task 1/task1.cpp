#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    setlocale(LC_ALL, "rus");
    int n;
    cout << "Введите размер n для матрицы 2n x 2n: ";
    cin >> n;
    int size = 2 * n;
    int array[20][20];
    cout << "Полученная матрица:" << endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            array[i][j] = rand() %  21 - 10; 
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
    int block = n;
    int tmp[10][10];
    for (int i = 0; i < block; i++) {
        for (int j = 0; j < block; j++) {
            tmp[i][j] = array[i][j];
        }
    }
    for (int i = 0; i < block; i++) {
        for (int j = 0; j < block; j++) {
            array[i][j] = array[i + block][j + block];
        }
    }

    for (int i = 0; i < block; i++) {
        for (int j = 0; j < block; j++) {
            array[i + block][j + block] = array[i][j + block];
        }
    }
    for (int i = 0; i < block; i++) {
        for (int j = 0; j < block; j++) {
            array[i][j + block] = array[i + block][j];
        }
    }
    for (int i = 0; i < block; i++) {
        for (int j = 0; j < block; j++) {
            array[i + block][j] = tmp[i][j];
        }
    }
    cout << "Матрица после перестановки блоков:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

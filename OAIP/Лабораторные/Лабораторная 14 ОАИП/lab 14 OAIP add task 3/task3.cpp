#include <iostream>
using namespace std;
void main() {
    setlocale(LC_ALL, "rus");
    srand(time(NULL));
    double array[5][5];
    cout << "Исходный массив: \n";
    double maxArray[5][3] = { 0 }; 
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            array[i][j] = rand() % 100 + (rand() % 100) / 100.0;
            cout << array[i][j] << "\t";
        }
        cout << "\n";
    }
    int imax = 0, jmax = 0;
    bool isIn = false;
    for (int k = 0; k < 5; k++) {
        double max = -1;
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                isIn = false;
                for (int m = 0; m < k; m++) {
                    if (array[i][j] == maxArray[m][0]) {
                        isIn = true;
                        break;
                    }
                }
                if (!isIn && array[i][j] > max) {
                    max = array[i][j];
                    imax = i;
                    jmax = j;
                }
            }
        }
        maxArray[k][0] = max;
        maxArray[k][1] = imax;
        maxArray[k][2] = jmax;
        swap(array[k][k], array[imax][jmax]);
    }
    cout << "\nМассив после перестановки элементов: \n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << array[i][j] << "\t";
        }
        cout << "\n";
    }
}


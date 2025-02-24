#include <iostream>
using namespace std;

void findNumber(int start, int end, int* steps, int& index);
void displayToOne(int start, int N);

void main() {
    setlocale(LC_ALL, "rus");
    int N = 0;
    cout << "Введите N: ";
    cin >> N;
    if (N <= 0) {
        cout << "Неверный ввод";
        return;
    }

    int size = log2(N) + 1; 
    int* steps = new int[size];
    int index = 0;

    cout << "Загадайте число X в промежутке от 1 до N\n";
    findNumber(1, N, steps, index);
    displayToOne(1, N);
    delete[] steps;
    return;
}

void findNumber(int start, int end, int* steps, int& index) {
    int middle, answer;

    while (start <= end) {
        middle = (start + end) / 2;
        cout << "Ваше число " << middle << "?";
        cout << "\n1 -- мало\n2 -- много\n3 -- угадал\nВаш выбор: ";
        cin >> answer;

        if (answer == 1) {
            start = middle + 1;
        }
        else if (answer == 2) {
            end = middle - 1;
        }
        else if (answer == 3) {
            cout << "ЧТООООООООООо! Число угадано!!!\n";
            cout << "Вот все шаги бинарного поиска: \n";
            for (int i = 0; i < index; i++) {
                cout << *(steps + i) << " " << endl;
            }
            cout << middle << endl;
            return;
        }
        else {
            cout << "Неверный ввод! Попробуйте снова.\n";
            continue;
        }

        steps[index++] = middle;
    }
}

void displayToOne(int start, int N) {
    cout << "Вывод последовательности до 1: \n";
    while (N > 1) {
        cout << N << endl;
        N = (start + N) / 2;
    }
    cout << "1\n";
}
#include <iostream>
using namespace std;

void findNumber(int start, int end, int* steps, int& index);
void displayToOne(int start, int N);

void main() {
    setlocale(LC_ALL, "rus");
    int N = 0;
    cout << "������� N: ";
    cin >> N;
    if (N <= 0) {
        cout << "�������� ����";
        return;
    }

    int size = log2(N) + 1; 
    int* steps = new int[size];
    int index = 0;

    cout << "��������� ����� X � ���������� �� 1 �� N\n";
    findNumber(1, N, steps, index);
    displayToOne(1, N);
    delete[] steps;
    return;
}

void findNumber(int start, int end, int* steps, int& index) {
    int middle, answer;

    while (start <= end) {
        middle = (start + end) / 2;
        cout << "���� ����� " << middle << "?";
        cout << "\n1 -- ����\n2 -- �����\n3 -- ������\n��� �����: ";
        cin >> answer;

        if (answer == 1) {
            start = middle + 1;
        }
        else if (answer == 2) {
            end = middle - 1;
        }
        else if (answer == 3) {
            cout << "�������������! ����� �������!!!\n";
            cout << "��� ��� ���� ��������� ������: \n";
            for (int i = 0; i < index; i++) {
                cout << *(steps + i) << " " << endl;
            }
            cout << middle << endl;
            return;
        }
        else {
            cout << "�������� ����! ���������� �����.\n";
            continue;
        }

        steps[index++] = middle;
    }
}

void displayToOne(int start, int N) {
    cout << "����� ������������������ �� 1: \n";
    while (N > 1) {
        cout << N << endl;
        N = (start + N) / 2;
    }
    cout << "1\n";
}
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
int main() {
    setlocale(LC_ALL, "ru");
    char arr[] = "variant 7 task 1 for 13 lab";
    int length = strlen(arr);
    int newLength = length; 
    for (int i = 0; i < length; ++i) {
        if (arr[i] == 'a') {
            ++newLength; 
        }
    }
    char* result = new char[newLength + 1];
    int j = 0;
    for (int i = 0; i < length; ++i) {
        result[j++] = arr[i]; 
        if (arr[i] == 'a') {
            result[j++] = '!';
        }
    }
    result[newLength] = '\0'; 
    strcpy(arr, result);
    cout << "Преобразованный массив: " << arr << endl;
    delete[] result;
    return 0;
}

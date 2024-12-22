#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "rus");
    char arr[] = "a1b2,c3+d4-e5.---2"; 
    int count = 0; 
    char* ptr = arr;
    while (*ptr != '\0') {
        if (*ptr >= '0' && *ptr <= '9') {
            count++;
        }
        ptr++; 
    }
    cout << "Количество цифр: " << count << endl;

    return 0;
}

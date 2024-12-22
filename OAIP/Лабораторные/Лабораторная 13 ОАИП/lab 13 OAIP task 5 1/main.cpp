#include <stdio.h>
using namespace std;
void main() {
    char s[256];
    int i, count, isTrue = 1;

    puts("Enter string: ");
    gets_s(s);

    for (count = i = 0; s[i] != 0; i++) {
        if (s[i] == '(') {
            count++;
        }
        if (s[i] == ')') {
            count--;
            if (count < 0) {
                isTrue = 0;
                break;
            }
        }
    }
    if (count == 0 && isTrue)
        puts("Ok\n");
    else
        puts("Not Ok\n");
}

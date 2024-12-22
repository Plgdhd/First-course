#include <stdio.h>
using namespace std;
void main() {
    char s[256];
    int count = 0;
    int valid = 1;
    char* ps;
    puts("Enter string: ");
    gets_s(s);
    for (ps = s; *ps != 0; ps++) {
        if (*ps == '(') {
            count++;
        }
        if (*ps == ')') {
            count--;
            if (count < 0) {
                valid = 0;
                break;
            }
        }
    }
    if (count == 0 && valid)
        puts("Ok\n");
    else
        puts("Not Ok\n");
}

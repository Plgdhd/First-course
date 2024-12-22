#include <iostream>
using namespace std;
void main() {
    char arr[] = "oaip opi kyar math day programm"; 
    char end[] = "aip";
    bool isHave = false; 
    char* word = strtok(arr, " "); 
    while (word != nullptr) {
        int wordLength = strlen(word);
        int endLength = strlen(end);
        if (endLength > wordLength) {
            word = strtok(nullptr, " "); 
            continue;
        }
        bool haveEnd = true;
        for (int i = 0; i < endLength; ++i) {
            if (word[wordLength - endLength + i] != end[i]) {
                haveEnd = false;
                break;
            }
        }
        if (haveEnd) {
            if (isHave) {
                cout << word;
            }
            else {
                cout << word;
                isHave = true;
            }
        }
        word = strtok(nullptr, " ");
    }
    if (!isHave) {
        cout << "Нет слов с таким окончанием";
    }
    cout << endl;  
}

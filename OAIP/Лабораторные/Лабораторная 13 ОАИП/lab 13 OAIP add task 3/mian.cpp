#include <iostream>
using namespace std;
int main() {
    char arr[] = "oaip Beloded rectangle china days rectangle china days";
    char words[50][50];
    int wordCount = 0; 
    char* word = strtok(arr, " ");
    while (word != nullptr) {
        bool isRepeat = false;
        for (int i = 0; i < wordCount; i++) {
            if (strcmp(words[i], word) == 0) {
                isRepeat = true;
                break;
            }
        }
        if (!isRepeat) {
            strcpy(words[wordCount], word);
            wordCount++;
        }
        word = strtok(nullptr, " "); 
    }
    for (int i = 0; i < wordCount; i++) {
        cout << words[i];
        if (i != wordCount - 1) {
            cout << " ";  
        }
    }
    cout << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    char arr1[] = "tasks laboratory angles oaip anime tables";
    char arr2[] = "tasks laboratoru anime angles";
    char words1[50][50];  
    char words2[50][50];
    int wordCount1 = 0, wordCount2 = 0; 
    char* word = strtok(arr1, " ");
    while (word != nullptr) {
        strcpy(words1[wordCount1], word);
        wordCount1++;
        word = strtok(nullptr, " ");
    }
    word = strtok(arr2, " ");
    while (word != nullptr) {
        strcpy(words2[wordCount2], word);
        wordCount2++;
        word = strtok(nullptr, " ");
    }
    int minLength = 1000; 
    char shortestWord[50];
    for (int i = 0; i < wordCount1; ++i) {
        bool isInSecond = false;
        for (int j = 0; j < wordCount2; ++j) {
            if (strcmp(words1[i], words2[j]) == 0) {
                isInSecond = true;
                break;
            }
        }
        if (!isInSecond) {
            int wordLength = strlen(words1[i]);
            if (wordLength < minLength) {  
                minLength = wordLength;
                strcpy(shortestWord, words1[i]);
            }
        }
    }
    if (minLength != 1000) {
        cout << "Самое короткое слово первого предложения, которого нет во втором: " << shortestWord << endl;
    }
    else {
        cout << "Нет слов первого предложения, которых нет во втором." << endl;
    }

    return 0;
}

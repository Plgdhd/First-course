#include "Header.h"
#include<Windows.h>
using namespace std;
void convertRusSymbol(unsigned char symbol) {
	setlocale(LC_ALL, "rus");
	SetConsoleOutputCP(1251);
	int toUpperLet = static_cast<int>(toupper(symbol));
	int toLowerLet = static_cast<int>(tolower(symbol));
	int difference = abs(toUpperLet - toLowerLet);
	cout << "Код прописной буквы '" << (char)toupper(symbol) << "' (ASCII: " << toUpperLet << ") " << "и код строчной буквы '" << (char)tolower(symbol) << "' (ASCII: " << toLowerLet << ")." << endl;
	cout << "Разница между кодами: " << difference << endl;
	/*int symbol_code = static_cast<int>(symbol);
	int toUpperLet, toLowerLet;

	if (symbol_code > 223) {
		toUpperLet = symbol_code - 32;
		toLowerLet = symbol_code;
	}
	else if (symbol_code > 191 && symbol_code < 224) {
		toUpperLet = symbol_code;
		toLowerLet = symbol_code + 32;
	}
	else {
		cout << "Код прописной буквы Ё (ASCII: 184 ) и код строчной буквы ё (ASCII: 168)." << endl;
		cout << "Разница между кодами: " << 16 << endl;
		return;
	}


	int difference = abs(toUpperLet - toLowerLet);
	cout << "Код прописной буквы '" << (char)toUpperLet << "' (ASCII: " << toUpperLet << ") и код строчной буквы '"
		<< (char)toLowerLet << "' (ASCII: " << toLowerLet << ")." << endl;
	cout << "Разница между кодами: " << difference << endl; */
}
#include "Header.h"
#include<Windows.h>
using namespace std;
void convertRusSymbol(unsigned char symbol) {
	setlocale(LC_ALL, "rus");
	SetConsoleOutputCP(1251);
	int toUpperLet = static_cast<int>(toupper(symbol));
	int toLowerLet = static_cast<int>(tolower(symbol));
	int difference = abs(toUpperLet - toLowerLet);
	cout << "��� ��������� ����� '" << (char)toupper(symbol) << "' (ASCII: " << toUpperLet << ") " << "� ��� �������� ����� '" << (char)tolower(symbol) << "' (ASCII: " << toLowerLet << ")." << endl;
	cout << "������� ����� ������: " << difference << endl;
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
		cout << "��� ��������� ����� � (ASCII: 184 ) � ��� �������� ����� � (ASCII: 168)." << endl;
		cout << "������� ����� ������: " << 16 << endl;
		return;
	}


	int difference = abs(toUpperLet - toLowerLet);
	cout << "��� ��������� ����� '" << (char)toUpperLet << "' (ASCII: " << toUpperLet << ") � ��� �������� ����� '"
		<< (char)toLowerLet << "' (ASCII: " << toLowerLet << ")." << endl;
	cout << "������� ����� ������: " << difference << endl; */
}
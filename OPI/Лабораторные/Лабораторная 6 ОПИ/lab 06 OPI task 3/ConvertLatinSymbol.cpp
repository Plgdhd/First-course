#include "Header.h"
using namespace std;
void convertLatinSymbol(unsigned char symbol) {
	int toUpperLet = static_cast<int>(toupper(symbol));
	int toLowerLet = static_cast<int>(tolower(symbol));
	int difference = abs(toUpperLet - toLowerLet);
	cout << "��� ��������� ����� '" << (char)toupper(symbol) << "' (ASCII: " << toUpperLet << ") " << "� ��� �������� ����� '" << (char)tolower(symbol) << "' (ASCII: " << toLowerLet << ")." << endl;
	cout << "������� ����� ������: " << difference << endl;
}

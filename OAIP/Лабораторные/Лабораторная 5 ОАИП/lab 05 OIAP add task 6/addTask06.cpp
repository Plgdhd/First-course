#include <iostream>

using namespace std;
void main() {
	//без проверки значений
	setlocale(LC_CTYPE, "rus");
	cout << "Введите координату x короля: ";
	int xKing = 0;
	cin >> xKing;
	cout << endl << "Введите координату y короля: ";
	int yKing = 0;
	cin >> yKing;
	cout << endl << "Введите координату x ладьи: ";
	int xRook = 0;
	cin >> xRook;
	cout << endl << "Введите координату y ладьи: ";
	int yRook = 0;
	cin >> yRook;
	cout << endl << "Введите координату х слона: ";
	int xEleph = 0;
	cin >> xEleph;
	cout << endl << "Введите координату y слона: ";
	int yEleph = 0;
	cin >> yEleph;
	if (xKing == xRook || yKing == yRook) {
		cout << endl << "Угроза королю от ладьи!";
	}
	else if (((xEleph- xKing) == (yEleph- yKing)) || ((xKing - xEleph) == (yEleph - yKing))){
		cout << endl << "Королю угрожает слон!";
	}
	else {
		cout << endl << "Королю ничего не угрожает.";
	}
}
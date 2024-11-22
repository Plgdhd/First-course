#include<cmath>
#include<Windows.h>
#include "Header.h"
#include<string>
using namespace std;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int variant;
	cout << "Выберете вариант использования программы:" << endl << "1) Определение разницы значений кодов в ASCII буквы в прописном и строчном написании, если введен символ латинского алфавита"
		<< endl << "2) Определение разницы значений кодов в Windows-1251 буквы в прописном и строчном написании, если введен символ русского алфавита" << endl << "3) Вывод в консоль кода символа, соответствующего введенной цифре"
		<< endl << "4) Выход из программы" << "\n\n" << "<------------------------------------------------------------------->\nВаш выбор: " << endl;
	cin >> variant;
	switch (variant)
	{ 
	case 1: {
		string symbols1;
		int i = 0;
		cout << "<------------------------------------------------------------------->" << endl;
		cout << "Введите символы латинского алфавита:";
		cin >> symbols1;
		while (symbols1[i] != '\0') {
			if (static_cast<int>(symbols1[i]) < 65 || (static_cast<int>(symbols1[i]) > 90 && static_cast<int>(symbols1[i]) < 97) || static_cast<int>(symbols1[i]) > 122)
			{
				cout << "Введите символы латинского алфавита еще раз! : ";
				i = 0; //обнуление индекса строки
				cin >> symbols1;
				continue;
			}
			i++;
		}
		i = 0;
		while (symbols1[i] != '\0') {
			convertLatinSymbol(symbols1[i]);
			i++;
		}
		break;
	}

	case 2: {
		string symbols2;
		unsigned int i = 0;
		cout << "<------------------------------------------------------------------->" << endl;
		cout << "Введите символы русского алфавита:";
		cin >> symbols2;
		while (symbols2[i] != '\0') {
			if ((static_cast<unsigned char>(symbols2[i]) < 192 || static_cast<unsigned char>(symbols2[i]) > 255) && static_cast<unsigned char>(symbols2[i]) != 184 && static_cast<unsigned char>(symbols2[i]) != 168 )
			{
				cout << "Введите символы русского алфавита еще раз! : ";
				cin >> symbols2;
				i = 0;//обнуление индекса строки
				continue;
			}
			i++;
		}
		i = 0;

		while (symbols2[i] != '\0') {
			convertRusSymbol(symbols2[i]);
			i++;
		}
		break;
	}

	case 3: {
		string symbols3;
		int i = 0;
		cout << "<------------------------------------------------------------------->" << endl;
		cout << "Введите цифры: ";
		cin >> symbols3;
		while (static_cast<unsigned char>(symbols3[i]) != '\0') {
			if (static_cast<int>(symbols3[i]) < 48 || static_cast<int>(symbols3[i]) > 57){
				cout << "Введите цифры еще раз!";
				cout << "Введите цифры: ";
				i = 0;//обнуление индекса строк
				cin >> symbols3;
				continue;
			}
			i++;
		}
		i = 0;
		while (symbols3[i] != '\0') {
			convertNumber(symbols3[i]);
			i++;
		}
		break;
	}
	case 4:
	{
		cout << "<------------------------------------------------------------------->" << endl;
		cout << "Выходим из программы";
		break;
	}
	default:
		cout << "Ошибочное значение. Выходим из программы.";
		break;



	return 0;
	}
}
#include<cmath>
#include<Windows.h>
#include "Header.h"
#include<string>
using namespace std;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int variant;
	cout << "�������� ������� ������������� ���������:" << endl << "1) ����������� ������� �������� ����� � ASCII ����� � ��������� � �������� ���������, ���� ������ ������ ���������� ��������"
		<< endl << "2) ����������� ������� �������� ����� � Windows-1251 ����� � ��������� � �������� ���������, ���� ������ ������ �������� ��������" << endl << "3) ����� � ������� ���� �������, ���������������� ��������� �����"
		<< endl << "4) ����� �� ���������" << "\n\n" << "<------------------------------------------------------------------->\n��� �����: " << endl;
	cin >> variant;
	switch (variant)
	{ 
	case 1: {
		string symbols1;
		int i = 0;
		cout << "<------------------------------------------------------------------->" << endl;
		cout << "������� ������� ���������� ��������:";
		cin >> symbols1;
		while (symbols1[i] != '\0') {
			if (static_cast<int>(symbols1[i]) < 65 || (static_cast<int>(symbols1[i]) > 90 && static_cast<int>(symbols1[i]) < 97) || static_cast<int>(symbols1[i]) > 122)
			{
				cout << "������� ������� ���������� �������� ��� ���! : ";
				i = 0; //��������� ������� ������
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
		cout << "������� ������� �������� ��������:";
		cin >> symbols2;
		while (symbols2[i] != '\0') {
			if ((static_cast<unsigned char>(symbols2[i]) < 192 || static_cast<unsigned char>(symbols2[i]) > 255) && static_cast<unsigned char>(symbols2[i]) != 184 && static_cast<unsigned char>(symbols2[i]) != 168 )
			{
				cout << "������� ������� �������� �������� ��� ���! : ";
				cin >> symbols2;
				i = 0;//��������� ������� ������
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
		cout << "������� �����: ";
		cin >> symbols3;
		while (static_cast<unsigned char>(symbols3[i]) != '\0') {
			if (static_cast<int>(symbols3[i]) < 48 || static_cast<int>(symbols3[i]) > 57){
				cout << "������� ����� ��� ���!";
				cout << "������� �����: ";
				i = 0;//��������� ������� �����
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
		cout << "������� �� ���������";
		break;
	}
	default:
		cout << "��������� ��������. ������� �� ���������.";
		break;



	return 0;
	}
}
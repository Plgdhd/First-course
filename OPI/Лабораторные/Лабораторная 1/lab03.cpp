#include <iostream>
//IvaniukAlexei2007
// � UTF-8
// � UTF-16


//�������������2007

//������2007Alexei

int main() {
	int number = 0x12345678;
	char hello[] = "Hello, ";
	char lfie[] = "IvaniukAlexei2007";
	char rfie[] = "�������������2007";
	char lr[] = "������2007Alexei";

	wchar_t Lfie[] = L"IvaniukAlexei2007";
	wchar_t Rfie[] = L"�������������2007";
	wchar_t LR[] = L"������2007Alexei";

	std::cout << hello << lfie << std::endl;
	return 0;
}

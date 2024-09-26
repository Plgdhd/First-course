#include <iostream>
//IvaniukAlexei2007
// в UTF-8
// в UTF-16


//ИванюкАлексей2007

//Иванюк2007Alexei

int main() {
	int number = 0x12345678;
	char hello[] = "Hello, ";
	char lfie[] = "IvaniukAlexei2007";
	char rfie[] = "ИванюкАлексей2007";
	char lr[] = "Иванюк2007Alexei";

	wchar_t Lfie[] = L"IvaniukAlexei2007";
	wchar_t Rfie[] = L"ИванюкАлексей2007";
	wchar_t LR[] = L"Иванюк2007Alexei";

	std::cout << hello << lfie << std::endl;
	return 0;
}

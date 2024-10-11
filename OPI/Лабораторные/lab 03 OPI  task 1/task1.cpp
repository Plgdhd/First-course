#include <iostream>
#include <iomanip>
//IvaniukAlexei2007
//49 76 61 6e 69 75 6b 41 6c 65 78 65 69 32 30 30 37 00 
//49 76 61 6e 69 75 6b 41 6c 65 78 65 69 32 30 30 37 0a
//49 00 76 00 61 00 6e 00 69 00 75 00 6b 00 41 00 6c 00 65 00 78 00 65 00 69 00 32 00 30 00 30 00 37 00 00 00

//»ванюкјлексейјндреевич2007
//c8 e2 e0 ed fe ea c0 eb e5 ea f1 e5 e9 c0 ed e4 f0 e5 e5 e2 e8 f7 32 30 30 37 00
//d098 d0b2 d0b0 d0bd d18e d0ba d090 d0bb d0b5 d0ba d181 d0b5 d0b9 d090 d0bd d0b4 d180 d0b5 d0b5 d0b2 d0b8 d187 32 30 30 37 0a D187 0032 0030 0030 0037
//18 04 32 04 30 04 3d 04 4e 04 3a 04 10 04 3b 04 35 04 3a 04 41 04 35 04 39 04 32 00 30 00 30 00 37 00 00 00

//»ванюк2007Alexei
//c8 e2 e0 ed fe ea 0032 0030 0030 0037 0041 006C 0065 0078 0065 0069
//d098 d0b2 d0b0 d0bd d18e d0ba 32 30 30 37 41 6c 65 78 65 69 0a
//18 04 32 04 30 04 3d 04 4e 04 3a 04 32 00 30 00 30 00 37 00 41 00 6c 00 65 00 78 00 65 00 69 00 00 00
using namespace std;
void main() {
	setlocale(LC_CTYPE, "rus");
	int number = 0x12345678;
	char hello[] = "Hello, ";
	char lfie[] = "IvaniukAlexei2007";
	char rfie[] = "»ванюкјлексейјндреевич2007";
	char lr[] = "»ванюк2007Alexei";

	wchar_t Lfie[] = L"IvaniukAlexei2007";
	wchar_t Rfie[] = L"»ванюкјлексейјндреевич2007";
	wchar_t LR[] = L"»ванюк2007Alexei";

  	cout << hello << lfie << endl;
}

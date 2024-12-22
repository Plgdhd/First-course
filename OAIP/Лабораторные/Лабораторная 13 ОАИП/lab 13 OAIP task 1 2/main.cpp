#include <iostream>
void main()
{
	char str[] = "OAIP BP GOOD LUCK!";
	int count = 0;
	char* pstr;
	pstr = &str[0];
	if (str)
		while (*pstr++)
			++count;
	std::cout << count;
}

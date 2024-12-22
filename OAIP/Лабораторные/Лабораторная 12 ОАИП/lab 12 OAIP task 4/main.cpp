#include <iostream>
void main()
{
	int val = 1; //84
	std::cout << "value = " << val;
	int& rv = val; //создали ссылку на value, =1 84
	rv = 5; //теперь val=5
	int* pval = &rv; // получаем адрес переменной val через ссылку rv
	std::cout << " value = " << *pval; //разименовываем указатель
}
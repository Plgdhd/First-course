#include <iostream>
void main()
{
	int val = 1; //84
	std::cout << "value = " << val;
	int& rv = val; //������� ������ �� value, =1 84
	rv = 5; //������ val=5
	int* pval = &rv; // �������� ����� ���������� val ����� ������ rv
	std::cout << " value = " << *pval; //�������������� ���������
}
#include <iostream> 
void main()
{
	const int ci = 4, cj = 3;
	int a[ci][cj] = { { 1, 2,3 }, { 3, 4 ,3}, { 5, 6,3 }, {6,3,5} };
	for (int i = 0; i < ci; i++){
		for (int j = 0; j < cj; j++)
			{
				std::cout << "a[" << i << "," << j << "] =" << a[i][j] << " ";
			}
			std::cout << "\n";
		}
}

#include <stdio.h>	
#include <stdlib.h>

void main()
{
	int* ptr, i, n;
	printf_s("Input size of massiv, n<30 \n");
	scanf_s("%d", &n);

	if (!(ptr = (int*)malloc(n * sizeof(int))))   //выделение памяти и проверка, 
	{	                                      //достаточно ли для нее места
		puts("Not enough memory");
		return;
	}
	int iFirst, iLast;
	bool isFirst = true;
	for (i = 0; i < n; i++)
	{
		printf_s("Input element [%d]\n", i + 1);
		scanf_s("%d", ptr + i);
	}
	int min = *ptr;
	for (int i = 0; i < n; i++) {
		if (*(ptr + i) < min) {
			min = *(ptr + i);
		}
		if (*(ptr + i) > 0 && isFirst == true) {
			isFirst = false;
			iFirst = i;
		}
		if (*(ptr + i) > 0) {
			iLast = i;
		}
	}
	int sum = 0;
	for (int i = iFirst+1; i <= iLast; i++) {
		sum += *(ptr + i);
	}
	printf_s("\nMassiv: \n", i + 1);
	for (i = 0; i < n; i++)
		printf_s("%d ", *(ptr + i));
	printf_s("\nMin element: %d", min);
	printf_s("\nSum between: %d", sum);
	free(ptr);     //освобождение динамической памяти

}

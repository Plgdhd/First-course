#include <stdio.h>	
#include <stdlib.h>
void main()
{
	int* ptr, i, n, sum = 0, count = 0;
	printf_s("Input size of massiv, n<30 \n");
	scanf_s("%d", &n);

	if (!(ptr = (int*)malloc(n * sizeof(int))))   //выделение памяти и проверка, 
	{	                                      //достаточно ли для нее места
		puts("Not enough memory");
		return;
	}
	for (i = 0; i < n; i++)
	{
		printf_s("Input element [%d]\n", i + 1);
		scanf_s("%d", ptr + i);
		sum += *(ptr + i);
	}
	sum /= n;
	for (int i = 0; i < n; i++) {
		if (*(ptr + i) > sum) count++;
	}
	printf_s("\nMassiv: \n", i+1);
	for (i = 0; i < n; i++)
		printf_s("%d ", *(ptr + i));
	printf_s("Amount of elements higher then average sum: %d", count);
	free(ptr);     //освобождение динамической памяти

}

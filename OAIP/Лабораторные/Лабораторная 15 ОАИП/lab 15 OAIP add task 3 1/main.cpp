#include <stdio.h>	
#include <stdlib.h>
#include <math.h>  

int main() {
    int i, n;
    double* ptr;
    printf_s("Input size of array, n < 30: ");
    scanf_s("%d", &n);
    ptr = (double*)malloc(n * sizeof(double));
    if (!ptr) {
        puts("Not enough memory");
        return 1;
    }
    for (i = 0; i < n; i++) {
        printf_s("Input element [%d]: ", i + 1);
        scanf_s("%lf", ptr + i);

    }
    int count = 0, imin = 0;
    double min = *ptr, sum = 0;
    for (i = 0; i < n; i++) {
        if (*(ptr + i) == 0) {
            count++;
        }
        if (*(ptr + i) < min) {
            min = *(ptr + i);
            imin = i;
        }
    }
    for (i = imin; i < n; i++) {
        sum += ptr[i];
    }

    printf_s("\Massiv: \n");
    for (i = 0; i < n; i++) {
        printf_s("%.2f ", ptr[i]);
    }
    printf_s("\nCount of elements equals zero: %d", count);
    printf_s("\nSum of elements after min: %.2f", sum);
    free(ptr);
    return 0;
}
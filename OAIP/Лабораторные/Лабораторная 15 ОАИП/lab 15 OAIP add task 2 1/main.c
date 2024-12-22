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
    int c;
    printf_s("\nInput c: ");
    scanf_s("%d", &c);
    int count = 0, imax = 0; 
    double max = fabs(ptr[0]);
    for (i = 0; i < n; i++) {
        if (fabs(ptr[i]) > max) {
            max = fabs(ptr[i]);
            imax = i;
        }
        if (ptr[i] > c) {
            count++;
        }
    }
    double sum = 0;
    for (i = imax; i < n; i++) {
        sum += ptr[i];
    }

    printf_s("\Massiv: \n");
    for (i = 0; i < n; i++) {
        printf_s("%.2f ", ptr[i]);
    }
    printf_s("\nCount of elements greater than c: %d", count);
    printf_s("\nSum of elements after abs(max): %.2f", sum);
    free(ptr);
    return 0;
}

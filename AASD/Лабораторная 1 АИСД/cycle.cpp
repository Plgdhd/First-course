#include "Headers.h";
unsigned long long int cycleProcessing(long long number) {
	if (number == 0) return 0;
	if (number == 1) return 1;

	int fib = 1, first = 0, second = 1;
	for (int i = 2; i <= number; i++) {
		fib = first + second;
		first = second;
		second = fib;
	}
	return fib;
}
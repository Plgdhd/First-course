#include "Headers.h";
unsigned long long int recursionProcessing(long long number) {
	if (number == 0) return number;
	if (number == 1) return number;
	return recursionProcessing(number - 1) + recursionProcessing(number - 2);
}
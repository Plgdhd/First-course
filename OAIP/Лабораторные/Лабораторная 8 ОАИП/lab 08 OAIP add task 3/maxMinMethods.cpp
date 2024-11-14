#include "maxMinMethods.h"
int maxInArray(float array[], int length) {
	int max, imax = 0;
	max = array[0];
	for (int i = 1; i < length; i++) {
		if (array[i] > max) {
			max = array[i];
			imax = i;
		}
	}
	return imax;
}

int minInArray(float array[], int length) {
	int min, imin = 0;
	min = array[0];
	for (int i = 1; i < length; i++) {
		if (array[i] < min) {
			min = array[i];
			imin = i;
		}
	}
	return imin;
}

float sumBetweenMinMax(float array[], int length, int min, int max) {
	float sum = 0;
	for (int i = min+1; i < max; i++) {
		sum += array[i];
	}
	return sum;
}
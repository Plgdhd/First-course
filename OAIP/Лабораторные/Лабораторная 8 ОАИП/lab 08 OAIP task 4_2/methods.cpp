#include "Header.h"
int minInArray(float array[], int length) {
	int imin, min = array[0];
	for (int i = 0; i < length; i++) {
		if (array[i] < min) {
			min = array[i];
			imin = i;
		}
	}
	return imin;
}
float findC(float array[], int length, float a) {
	float c = 0;
	for (int i = 0; i < length; i++) {
		c += array[i] / (1 + array[i]);
	}
	c += a;
	return c;
}
#include "functions.h"
#include <stdlib.h>
#include <time.h>

//Returns A + b
int sum(int A, int B) {
	return A + B;
}

void fillArr(int arr[], int length, int A, int B){
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (B - A) + A;
}

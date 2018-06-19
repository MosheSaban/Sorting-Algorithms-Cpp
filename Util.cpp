#include "Header.h"

/* A utility function to swap two elements	*/
void swap(int* a, int* b) {
	int t = *a;
	*a = *b;
	*b = t;
}

int* getRandomArray(int n) {
	int* a = new int[n];
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 1000;
	return a;
}

void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
}






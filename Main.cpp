#include "Header.h"

void main() {
	int *arr;
	int n = 20;

	arr = getRandomArray(n);
	cout << "----Quick Sort Alg----\n\nThe array before sorting: \n";
	printArray(arr, n);
	qS(arr, 0, n - 1);
	cout << "\nThe array after sorting: \n";
	printArray(arr, n);
	delete[] arr;

	arr = getRandomArray(n);
	cout << "\n\n----Max Sort Alg----\n\nThe array before sorting: \n";
	printArray(arr, n);
	maxSort(arr, n);
	cout << "\nThe array after sorting: \n";
	printArray(arr, n);
	delete[] arr;

	cin >> n;
}
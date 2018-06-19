#include "Header.h"

void main() {
	int *arr;
	int n = ARRAYSIZE;

	arr = getRandomArray(n);
	cout << "----Quick Sort Alg----\n\nThe array before sorting: " << endl;
	printArray(arr, n);
	qS(arr, 0, n - 1);
	cout << "\nThe array after sorting: " << endl;
	printArray(arr, n);
	delete[] arr;

	arr = getRandomArray(n);
	cout << "\n\n----Max Sort Alg----\n\nThe array before sorting: " << endl;
	printArray(arr, n);
	maxSort(arr, n);
	cout << "\nThe array after sorting: " << endl;
	printArray(arr, n);
	delete[] arr;

	arr = getRandomArray(n);
	cout << "\n\n----Bubble Sort Alg----\n\nThe array before sorting: " << endl;
	printArray(arr, n);
	bubbleSort(arr, n);
	cout << "\nThe array after sorting: " << endl;
	printArray(arr, n);
	delete[] arr;

	arr = getRandomArray(n);
	cout << "\n\n----Merge Sort Alg----\n\nThe array before sorting: " << endl;
	printArray(arr, n);
	int temp[ARRAYSIZE];
	mergeSort(arr, temp, 0, ARRAYSIZE-1, n);
	cout << "\nThe array after sorting: " << endl;
	printArray(arr, n);
	delete[] arr;

	cin >> n;
}
#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

/* A utility function to swap two elements	*/
void swap(int* a, int* b) {
	int t = *a;

	*a = *b;
	*b = t;
}

/* The main function that implements QuickSort in random version
arr[]	is Array to be sorted,
left	is Starting index,
right	is Ending index	*/
void qS(int arr[], int left, int right) {
	int pivot, runLeft = left, runRight = right;

	if (right - left > 0) {
		pivot = left + rand() % (right - left + 1); // Select the pivot randomly.
		while (runLeft <= pivot && runRight >= pivot) { // while the array have smaller values from left to piv
			while (arr[runLeft] < arr[pivot] && runLeft <= pivot)		// and bigger values from right
				runLeft++;	// while no need to swap from left
			while (arr[runRight] > arr[pivot] && runRight >= pivot)
				runRight--;	// while no need to swap from right
			swap(&arr[runLeft], &arr[runRight]);
			if (runLeft == pivot)	// if pivot position replaced with runRight
				pivot = runRight++;
			else if (runRight == pivot) // if pivot position replaced with runLeft
				pivot = runLeft--;
			runLeft++;
			runRight--;
		}
		qS(arr, left, pivot - 1);
		qS(arr, pivot + 1, right);
	}	// end if
}	// end qS function

void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
}

void main() {
	int arr[20];
	int n = sizeof(arr) / sizeof(arr[0]);

	srand(time(NULL));
	for (int i = 0; i < n; i++)
		arr[i] = rand() % 1000;

	cout << "The array before sorting: \n";
	printArray(arr, n);
	qS(arr, 0, n - 1);
	cout << "\nThe array after sorting: \n";
	printArray(arr, n);
	cin >> n;
}

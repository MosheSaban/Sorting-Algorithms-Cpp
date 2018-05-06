/* Author Moshe Saban */
#include "Header.h"

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

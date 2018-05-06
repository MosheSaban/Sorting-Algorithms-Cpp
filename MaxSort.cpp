/* Author Moshe Saban */
#include "Header.h"

/* The main function that implements MaxSort */
void maxSort(int arr[], int n) {
	int n2 = n;
	while(true) {
		if(arr[n2-1] < arr[n-2])
			swap(&arr[n2 - 1], &arr[n - 2]);
		n--;
		if(n == 1) {
			n = n2;
			n2--;
		}
		if(n2 == 0)
			break;
	}

}	// end maxSort function

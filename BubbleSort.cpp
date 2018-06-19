/* Author Moshe Saban */
#include "Header.h"

void bubbleSort(int arr[], int n) {

	for (int j = 0; j < n; j++)
		for (int i = 0; i < n - 1; i++)
			if(arr[i] > arr[i + 1])
				swap(&arr[i], &arr[i + 1]);

}	// end bubbleSort function

/* Author Moshe Saban */
#include "Header.h"

void merge(int arr[], int temp[], int left, int mid, int right)
{
	int leftPlace = left, rightPlace = mid + 1;
	bool leftOver = false,	//all the left data was merged
		rightOver = false;	//all the right data was merged


	for (int place = left; place <= right; place++)
	{
		if (leftPlace > mid) leftOver = true;
		if (rightPlace > right) rightOver = true;

		temp[place] = (rightOver || !leftOver && arr[leftPlace] <= arr[rightPlace]) ?	//the merge
			arr[leftPlace++] : arr[rightPlace++];
	}
	for (int i = left; i <= right; i++)	//return the merged data into the array
		arr[i] = temp[i];
}

/*	The main function that implements MergeSort
	arr[]	is the array to sort
	temp[]	is array that helps the merge process
	left	is the index of the current left
	right	is the index of the current right
	n		is the size of the array	*/
void mergeSort(int arr[],int temp[],int left, int right, int n) {

	int mid = (left + right) / 2;

	if (left < mid)
		mergeSort(arr, temp, left, mid, n);
	if (right > mid + 1)
		mergeSort(arr, temp, mid + 1, right, n);
	merge(arr, temp, left, mid, right);
}	// end mergeSort function


//function implementation.

#include "binary-search.h"
#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
	int low = 0, high = size - 1, mid;

	while (low <= high)
	{
		mid = (low + high) / 2;
		if (target == arr[mid])
		{
			return mid;
		}
		else if (target < arr[mid])
		{
			high = mid - 1;
		}
		else //target > arr[mid]
		{
			low = mid + 1;
		}
	}

	return -1;
}

#include "insertion_sort.h"

//Optimize version with shifting:

void insertion_sort(int arr[], const int size)
{
	for (int i = 1; i < size; ++i)
	{
		int key = arr[i], j = i - 1;

		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
		}

		arr[j + 1] = key;
	}
}

// Another way
/*
void insertion_sort(int arr[], int size) // O(n^2)
{

	for (int i = 1; i < size; ++i)
	{
		for (int j = i; j > 0; --j)
		{
			if (arr[j] < arr[j - 1])
			{
				int temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
			else
			{
				break;
			}
		}
	}
}
*/

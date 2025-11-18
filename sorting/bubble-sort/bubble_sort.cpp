#include "bubble_sort.h"

void bubble_sort(int arr[], int size) // O(n^2)
{
	for (int i = 0; i < size; ++i)
	{
		bool swapped = false;
		for (int j = 0; j < (size - 1 - i); ++j)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

				swapped = true;
			}
		}

		if (!swapped)
			break;
	}
}

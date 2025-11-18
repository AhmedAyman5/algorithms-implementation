#include "selection_sort.h"

void selection_sort(int arr[], int size) // O(n^2)
{
	for (int i = 0; i < size - 1; ++i)
	{
		int smallest = i;
		for (int j = i + 1; j < size; ++j)
		{
			if (arr[j] < arr[smallest])
			{
				smallest = j;
			}
		}
		if (i != smallest)
		{
			int temp = arr[i];
			arr[i] = arr[smallest];
			arr[smallest] = temp;
		}
	}
}


int partition(int arr[], int start, int end)
{
	int i = start - 1;
	int j = start;
	int pivot = arr[end];

	while (j < end)
	{
		if (arr[j] <= pivot)
		{
			i++;

			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}

		j++;
	}

	//put pivot in correct location
	i++;
	arr[end] = arr[i];
	arr[i] = pivot;

	return i;
}

void quick_sort(int arr[], int start, int end)
{
	if (start >= end) // baseCase
		return;

	int pivotIndex = partition(arr, start, end);

	quick_sort(arr, start, pivotIndex - 1); //Left sub array of pivot
	quick_sort(arr, pivotIndex + 1, end); //right sub array of pivot
}

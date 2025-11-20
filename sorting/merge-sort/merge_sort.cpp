// O(n log n)

//
void merge(int arr[], int l, int m, int h)
{
	int leftSize = m - l + 1;
	int rightSize = h - m;

	int* left = new int[leftSize];
	int* right = new int[rightSize];

	int index = l;
	for (int i = 0; i < leftSize; ++i) left[i] = arr[index++];
	for (int i = 0; i < rightSize; ++i) right[i] = arr[index++];

	int leftIndex = 0;
	int rightIndex = 0;
	int mainArrayIndex = l;

	while (leftIndex < leftSize && rightIndex < rightSize)
	{
		if (left[leftIndex] <= right[rightIndex]) // "<=" to be stable.
		{
			arr[mainArrayIndex] = left[leftIndex];
			leftIndex++;
		}
		else
		{
			arr[mainArrayIndex] = right[rightIndex];
			rightIndex++;
		}

		mainArrayIndex++;
	}

	//remaining elements
	while (leftIndex < leftSize)
	{
		arr[mainArrayIndex] = left[leftIndex];
		mainArrayIndex++;
		leftIndex++;
	}

	while (rightIndex < rightSize)
	{
		arr[mainArrayIndex] = right[rightIndex];
		mainArrayIndex++;
		rightIndex++;
	}

	//clean memory
	delete[] left;
	delete[] right;
}

void merge_sort(int arr[], int low, int high)
{
	//end of the divide phase
	if (low >= high)
		return;

	//divide phase
	int mid = low + (high - low) / 2;
	merge_sort(arr, low, mid); //Left portion
	merge_sort(arr, mid + 1, high); //Right portion

	//conquer phase
	merge(arr, low, mid, high);
}

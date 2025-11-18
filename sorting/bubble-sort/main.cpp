#include<iostream>
using namespace std;
#include "bubble_sort.h"

//Helper function
void displayArr(int arr[], int size);

int main()
{
	//Test

	int arr[10] = {6, 3, 10, 7, 4, 5, 9, 1, 8, 2};
	int size = 10;

	cout << "Before sort:\n";
	displayArr(arr, size);

	bubble_sort(arr, size);

	cout << "After sort:\n";
	displayArr(arr, size);

	return 0;
}

void displayArr(int arr[], int size)
{
	for (int i = 0; i < size; ++i) {
		cout << arr[i] << ' ';
	}
	cout << '\n';
}
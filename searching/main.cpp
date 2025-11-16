#include<iostream>
using namespace std;
#include "binary-search.h"

int main()
{
	//Test

	int size = 12;
	int arr[12] = { 2, 5, 6, 9 ,10, 15, 34, 56, 67, 78, 79, 98 };

	int target = 98;
	cout << binarySearch(arr, size, target) << '\n';

	target = 999;
	cout << binarySearch(arr, size, target) << '\n';

	target = -80;
	cout << binarySearch(arr, size, target) << '\n';

	return 0;
}
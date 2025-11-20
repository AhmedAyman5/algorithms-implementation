# Merge Sort (C++ Implementation))

This project contains a clean implementation of **Merge Sort**, a classic **Divide and Conquer** sorting algorithm.  
Merge Sort is efficient, stable, and widely used in real-world applications.

---

## What Is Merge Sort?

Merge Sort works by:

1. **Dividing** the array into two halves recursively until each subarray has one element.  
2. **Merging** the sorted subarrays into a single sorted array.

---

## Why Merge Sort?

- **Stable sort** (keeps equal elements in original order)  
- **Predictable O(n log n)** time complexity in all cases  
- Great for sorting **large datasets** or **linked lists**  

---

## Time & Space Complexity

| Case        | Complexity |
|-------------|------------|
| Best Case   | O(n log n) |
| Average     | O(n log n) |
| Worst       | O(n log n) |
| Space       | O(n) (for temporary arrays during merging) |

---

## Example Usage

```cpp
	//Test

	int arr[10] = {6, 3, 10, 7, 4, 5, 9, 1, 8, 2};
	int size = 10;

	cout << "Before sort:\n";
	displayArr(arr, size);

	merge_sort(arr, size);

	cout << "After sort:\n";
	displayArr(arr, size);
```
## output
```
Before sort:
6 3 10 7 4 5 9 1 8 2
After sort:
1 2 3 4 5 6 7 8 9 10
```

---

## Files in this Project
- merge_sort.h
- merge_sort.cpp
- main.cpp
- README.md

---

## Goal

This project is part of my algorithms learning journey, implementing every fundamental sorting algorithm from scratch in C++.

---

## Author
**Ahmed Ayman** <br>
Student at Faculty of Computers and Information Science, Mansoura University (Software Engineering Department)

Focused on mastering Algorithms & Data Structures.

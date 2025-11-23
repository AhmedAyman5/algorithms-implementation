# Quick Sort (C++ Implementation)

This project contains a clean implementation of **Quick Sort**, one of the fastest and most widely used sorting algorithms.  
Quick Sort uses the **Divide and Conquer** technique and works by choosing a **pivot** and partitioning the array into elements smaller and greater than the pivot.

---

## How Quick Sort Works

1. Choose a **pivot** (in this implementation: the **last element**).
2. **Partition** the array so that:
   - All elements ≤ pivot are moved before it.
   - All elements > pivot are moved after it.
3. Recursively apply Quick Sort on the left and right subarrays.

---

## Why Quick Sort?

- Extremely fast in practice  
- In-place (no extra arrays like Merge Sort)  
- Used in real systems (like: C standard library qsort implementation)

---

## Time & Space Complexity

| Case        | Complexity |
|-------------|------------|
| Best Case   | O(n log n) |
| Average     | O(n log n) |
| Worst Case  | O(n²) (when array is already sorted or pivot chosen poorly) |
| Space       | O(log n) due to recursion |

---

## Example Usage

```cpp
	//Test

	int arr[10] = {6, 3, 10, 7, 4, 5, 9, 1, 8, 2};
	int size = 10;

	cout << "Before sort:\n";
	displayArr(arr, size);

	quick_sort(arr, size);

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
- quick_sort.h
- quick_sort.cpp
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

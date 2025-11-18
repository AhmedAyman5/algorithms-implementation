# Bubble Sort (Optimized) (C++ Implementation)

This project provides an optimized implementation of the Bubble Sort algorithm using C++.

---

## What is Bubble Sort?

Bubble Sort repeatedly compares adjacent elements and swaps them if they are in the wrong order.
This continues until the array becomes fully sorted.

This implementation includes the early-stop optimization, which stops the algorithm if no swaps occurred in a full pass.

---

## Algorithm Idea

1. Compare each pair of neighbors.  
2. Swap if the first is greater than the second.  
3. After each full pass, the largest element “bubbles” to the end.  
4. Stop early if no swaps happened (the array is already sorted).  

---

## Time Complexity

- **Worst Case:** O(n²)  
- **Average Case:** O(n²)  
- **Best Case:** O(n) (already sorted)
- **Space Complexity:** O(1)

---

## Characteristics

- In-place  
- Stable  
- Very easy to understand  
- Not used in real-world systems due to slowness

---

## Example Usage

```cpp
	//Test
	int arr[10] = {6, 3, 10, 7, 4, 5, 9, 1, 8, 2};
	int size = 10;

	cout << "Before sort:\n";
	displayArr(arr, size);

	bubble_sort(arr, size);

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
- bubble_sort.h
- bubble_sort.cpp
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

# Insertion Sort (Optimized Shifting Version) - C++ Implementation

This project contains an optimized implementation of **Insertion Sort** using the shifting technique instead of swapping.  
This approach is faster and more efficient, especially for nearly-sorted arrays.

---

## What Is Insertion Sort?

Insertion Sort builds the sorted section of the array one element at a time.  
For each new element:

1. Store it as a **key**  
2. Shift all larger elements one position to the right  
3. Insert the key into its correct position  

---

## Why the Shifting Version?

Instead of swapping repeatedly, we:

- Move all larger elements to the right
- Insert the key once

This results in:

- Cleaner code  
- Fewer operations  
- Faster on almost-sorted data  

---

## Time & Space Complexity

| Case        | Complexity |
|-------------|------------|
| Best Case   | **O(n)** (already sorted) |
| Average     | **O(n²)** |
| Worst       | **O(n²)** |
| Space       | **O(1)** |

---

## Example Usage

```cpp
	//Test

	int arr[10] = {6, 3, 10, 7, 4, 5, 9, 1, 8, 2};
	int size = 10;

	cout << "Before sort:\n";
	displayArr(arr, size);

	insertion_sort(arr, size);

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

## Project Files
- insertion_sort.h
- insertion_sort.cpp
- main.cpp
- README.md

---

## Goal

This project is part of my journey to implement every major algorithm from scratch in C++ to deepen my understanding of data structures and algorithmic thinking.

---

## Author
**Ahmed Ayman** <br>
Student at Faculty of Computers and Information Science, Mansoura University (Software Engineering Department)

Focused on mastering Algorithms & Data Structures.

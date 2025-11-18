# Selection Sort (C++ Implementation)

This project contains a simple and clean implementation of the Selection Sort algorithm using C++.

---

## What is Selection Sort?

Selection Sort is a comparison-based sorting algorithm that repeatedly selects the smallest element from the unsorted portion of the array and places it at the beginning(sorted portion).

---

## Algorithm Idea

1. Assume the first element is the smallest.  
2. Scan the rest of the array to find the true smallest element.  
3. Swap it with the first position.  
4. Move to the next index and repeat.  

---

## Time Complexity

- **Worst Case:** O(n²)  
- **Average Case:** O(n²)  
- **Best Case:** O(n²)  
- **Space Complexity:** O(1)

---

## Characteristics

- In-place  
- Not stable  
- Simple but slow for large datasets  
- Good for learning how sorting works internally  

---

## Example Usage

```cpp
	//Test

	int arr[10] = {6, 3, 10, 7, 4, 5, 9, 1, 8, 2};
	int size = 10;

	cout << "Before sort:\n";
	displayArr(arr, size);

	selection_sort(arr, size);

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
- selection_sort.h
- selection_sort.cpp
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

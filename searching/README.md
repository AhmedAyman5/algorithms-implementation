# Binary Search Algorithm (C++)

This folder contains an implementation of the **Binary Search** algorithm using C++.  
Binary Search is one of the most fundamental and efficient searching techniques for sorted arrays.

---

## Algorithm Description

Binary Search works by repeatedly dividing the sorted array into halves and checking whether the target is:

- equal to the middle element → return index  
- smaller → search the left half  
- greater → search the right half  

This reduces the search space from **n → n/2 → n/4 → ... → 1**, giving it a logarithmic time complexity O(log n).

---

## Function Implementation

```cpp
int binarySearch(int arr[], int size, int target)
{
    int low = 0, high = size - 1, mid;

    while (low <= high)
    {
        mid = low + (high - low) / 2; // safer mid calculation

        if (target == arr[mid])
            return mid;
        else if (target < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    return -1;
}
```

```cpp
int main()
{
    int size = 12;
    int arr[12] = {2, 5, 6, 9, 10, 15, 34, 56, 67, 78, 79, 98};

    cout << binarySearch(arr, size, 98) << "\n";   // found
    cout << binarySearch(arr, size, 999) << "\n";  // not found (-1)
    cout << binarySearch(arr, size, -80) << "\n";  // not found (-1)

    return 0;
}
```

---

## Time Complexity
Operation: Complexity.
Best Case: O(1).
Average Case: O(log n).
Worst Case: O(log n).


Space Complexity: O(1)

Binary Search uses constant extra memory.

---

## Requirements

Array must be sorted

Works on arrays of any numeric type

---

## Author
**Ahmed Ayman** <br>
Student at Faculty of Computers and Information Science, Mansoura University (Software Engineering Department)

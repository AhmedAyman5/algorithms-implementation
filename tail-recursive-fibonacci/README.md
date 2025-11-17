# Tail-Recursive Fibonacci in C++

This repository contains an optimized implementation of the Fibonacci sequence using **tail recursion**, 

a technique that transforms recursive functions into a form that runs in **O(n)** time and uses **constant stack space** when optimized by the compiler.

---

## Why Tail Recursion?

The classic recursive Fibonacci:

```cpp
fib(n) = fib(n-1) + fib(n-2)
```

creates *two* recursive calls each time.  
This leads to an exponential time complexity:

```
O(2^n)
```

This means even `fib(45)` becomes extremely slow and consumes a lot of stack space.

---

## What Is Tail Recursion?

A function is **tail recursive** if the *last* operation executed is the recursive call.

Example (tail-recursive Fibonacci):

```cpp
long long fib(long long n, long long a = 0, long long b = 1)
{
    if (n == 0)
        return a;

    return fib(n - 1, b, a + b);  // tail call
}
```

### Why is this powerful?

Because there are **no pending operations**, the compiler can optimize the function by reusing the *same* stack frame, effectively turning recursion into an iterative loop internally.

### Benefits

- Time complexity becomes **O(n)**  
- No risk of stack overflow  
- Much faster than normal recursion  
- As efficient as a loop, but cleaner to write

---

## How the Algorithm Works

The function carries the Fibonacci values through parameters:

- `a` → F(n - 1)  
- `b` → F(n)

Then updates them like this:

```
(a, b) → (b, a + b)
```

This simulates the Fibonacci sequence step by step:

```
(0, 1) → (1, 1) → (1, 2) → (2, 3) → (3, 5) → ...
```

After `n` steps, `a` contains `F(n)`.

---

## Full C++ Code

```cpp
#include<iostream>
using namespace std;

// Tail-recursive Fibonacci (O(n))
long long fib(long long n, long long a = 0, long long b = 1)
{
    if (n < 0)
        throw invalid_argument("Negative index not allowed.");

    if (n == 0)
        return a;

    return fib(n - 1, b, a + b); // tail call
}

int main()
{
    cout << "fib(10) = " << fib(10) << endl;
}
```

---

## Example Output

```
fib(0) = 0
fib(1) = 1
fib(5) = 5
fib(10) = 55
fib(20) = 6765
```

---

## Summary

| Method               | Time Complexity | Stack Usage | Notes |
|----------------------|-----------------|-------------|-------|
| Normal Recursion     | O(2^n)          | High        | Very slow, unsafe |
| Tail Recursion       | O(n)            | Low / O(1)  | Fast, safe |
| Iterative (loop)     | O(n)            | O(1)        | Same efficiency as tail recursion |

Tail recursion is an essential concept in algorithms, functional programming, and optimizing recursive solutions.

---

## Author
Ahmed Ayman  
Student at Faculty of Computers and Information Science, Mansoura University (Software Engineering Department) <br>
Learning Algorithms, Data Structures, and Clean Code

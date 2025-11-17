#include<iostream>
using namespace std;

// Tail(Terminal) Recursion. O(n)
// insted of O(2^n) for regular recursion.
// a = F(n-1), b = F(n)
// For first call: a = 0 (F0), b = 1 (F1)
long long fibonacci(long long n, long long a = 0, long long b = 1)
{
	if (n <= 0)
		return a;

	return fibonacci(n - 1, b, a + b);
}

int main()
{
	//Test
	//Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, ...

	cout << "Fibonacci(0) = " << fibonacci(0) << '\n';
	cout << "Fibonacci(1) = " << fibonacci(1) << '\n';
	cout << "Fibonacci(2) = " << fibonacci(2) << '\n';
	cout << "Fibonacci(5) = " << fibonacci(5) << '\n';
	cout << "Fibonacci(8) = " << fibonacci(8) << '\n';
	cout << "Fibonacci(10) = " << fibonacci(10) << '\n';
	cout << "Fibonacci(20) = " << fibonacci(20) << '\n';
	cout << "Fibonacci(45) = " << fibonacci(45) << '\n';

	return 0;
}
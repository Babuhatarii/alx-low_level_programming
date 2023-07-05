#include "main.h"

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The square root of n if it is a perfect square, otherwise -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper - Recursive helper function to calculate the square root.
 * @n: The number to find the square root of.
 * @x: The current value to check if it is the square root.
 *
 * Return: The square root of n if found, otherwise -1.
 */
int sqrt_helper(int n, int x)
{
	if (x * x == n)
		return (x);

	if (x * x > n)
		return (-1);

	return (sqrt_helper(n, x + 1));
}

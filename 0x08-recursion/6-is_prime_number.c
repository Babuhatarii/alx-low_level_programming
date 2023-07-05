#include "main.h"

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (check_prime(n, 2));
}

/**
 * check_prime - Helper function to check if a number is prime recursively.
 * @n: The number to check.
 * @divisor: The divisor to check divisibility with.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int check_prime(int n, int divisor)
{
	if (n == divisor)
		return (1);

	if (n % divisor == 0)
		return (0);

	return (check_prime(n, divisor + 1));
}

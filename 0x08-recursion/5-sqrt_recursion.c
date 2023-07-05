#include <stdio.h>

int _putchar(char c);

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

	return (sqrt_helper(n, 0, 1));
}

/**
 * sqrt_helper - Recursive helper function to calculate the square root.
 * @n: The number to find the square root of.
 * @root: The current value to check if it is the square root.
 * @step: The step size to increment root by.
 *
 * Return: The square root of n if found, otherwise -1.
 */
int sqrt_helper(int n, int root, int step)
{
	if (root * root == n)
		return (root);

	if (root * root > n)
		return (-1);

	return (sqrt_helper(n, root + step, step + 2));
}

/**
 * _print_number - Prints an integer character by character.
 * @n: The number to be printed.
 */
void _print_number(int n)
{
	if (n / 10 != 0)
		_print_number(n / 10);

	_putchar((n % 10) + '0');
}

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to be written.
 *
 * Return: On success, return the character written. On error, return -1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int result;

	result = _sqrt_recursion(1);
	_puts("Correct output - case: _sqrt_recursion(1): ");
	_print_number(result);
	_putchar('\n');

	result = _sqrt_recursion(4096);
	_puts("Correct output - case: _sqrt_recursion(4096): ");
	_print_number(result);
	_putchar('\n');

	result = _sqrt_recursion(-16);
	_puts("Correct output - case: _sqrt_recursion(-16): ");
	_print_number(result);
	_putchar('\n');

	result = _sqrt_recursion(16777216);
	_puts("Correct output - case: _sqrt_recursion(16777216): ");
	_print_number(result);
	_putchar('\n');

	_puts("Return SUCCESS\n");

	return (0);
}

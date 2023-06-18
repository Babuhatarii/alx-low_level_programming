#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers
 *              in ascending order, separated by commas and spaces.
 *              Uses the putchar function.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		if (digit > 0)
		{
			putchar(',');
			putchar(' ');
		}

		putchar('0' + digit);
	}

	putchar('\n');

	return (0);
}


#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

	/*
	 * Update the value at p + 5 with 98
	 * This indirectly modifies a[2] by changing the value at memory location
	 * p + 5, assuming that the memory locations are contiguous.
	 */
	*(p + 5) = 98;

	/* Print the updated value of a[2] */
	printf("a[2] = %d\n", a[2]);

	return (0);
}

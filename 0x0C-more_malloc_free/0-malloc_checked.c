#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The number of bytes to allocate
 *
 * Return: Pointer to the allocated memory
 *         If malloc fails, the program terminates with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		fprintf(stderr, "Memory allocation failed. Exiting with status 98.\n");
		exit(98);
	}

	return (ptr);
}


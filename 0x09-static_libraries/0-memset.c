#include "main.h"

/**
 * _memset - Fills a block of memory with a specific value
 * @s: Pointer to the starting address of memory to be filled
 * @b: The desired value to be set
 * @n: Number of bytes to be filled
 *
 * Return: Pointer to the memory area `s`
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++, n--)
		s[i] = b;

	return (s);
}

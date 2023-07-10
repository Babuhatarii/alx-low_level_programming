#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create an array of size `size` and assign the character `c`
 * @size: The size of the array
 * @c: The character to assign
 *
 * Description: This function creates an array of characters of size `size` and
 *              initializes each element with the character `c`.
 *
 * Return: Pointer to the allocated array, NULL if failed.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(sizeof(char) * size);
	if (size == 0 || array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}


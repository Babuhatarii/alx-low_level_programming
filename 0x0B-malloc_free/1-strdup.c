#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicate a string.
 * @str: The string to duplicate.
 *
 * Return: Pointer to the duplicated string, or NULL if str is NULL or if
 *         memory allocation fails.
 */
char *_strdup(char *str)
{
	char *duplicate;
	int length = 0, i;

	if (str == NULL)
		return (NULL);

	/* Calculate the length of the input string */
	while (str[length] != '\0')
		length++;

	/* Allocate memory for the duplicate string */
	duplicate = malloc(sizeof(char) * (length + 1));
	if (duplicate == NULL)
		return (NULL);

	/* Copy the input string into the duplicate */
	for (i = 0; i < length; i++)
		duplicate[i] = str[i];
	duplicate[length] = '\0'; /* Add null terminator at the end */

	return (duplicate);
}


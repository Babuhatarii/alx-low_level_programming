#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to dest
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 *
 * Return: Pointer to the destination string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}

	for (int j = 0; j < i; j++)
	{
		dest[j] = src[j];
	}

	dest[i] = '\0';

	return (dest);
}

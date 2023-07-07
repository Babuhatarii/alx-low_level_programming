#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates the first occurrence of a substring in a string
 * @haystack: Pointer to the string to be searched
 * @needle: Pointer to the substring to search for
 *
 * Return: Pointer to the first occurrence of @needle in @haystack,
 *         or NULL if @needle is not found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (NULL);
}


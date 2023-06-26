#include "main.h"

/**
 * puts2 - Prints every second character of a string
 * starting with the first character
 * @str: Input string
 *
 * Return: void
 */
void puts2(char *str)
{
	int length = 0;
	int i;

	/* Calculate the length of the string */
	while (str[length] != '\0')
	{
		length++;
	}

	/* Print every second character */
	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

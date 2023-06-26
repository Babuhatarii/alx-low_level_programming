#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: stringto print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}

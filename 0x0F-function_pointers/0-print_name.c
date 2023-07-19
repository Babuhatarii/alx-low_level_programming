#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name using a function pointer.
 * @name: The name to be printed.
 * @f: A pointer to the function that handles the printing.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}


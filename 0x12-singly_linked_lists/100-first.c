#include <stdio.h>

/**
 * first - Function that prints a sentence before the main function is executed
 *
 * Description: function is tagged with the 'constructor' attribute, which
 *	that it is automatically executed before the 'main' function
 */
void first(void) __attribute__ ((constructor));

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

/**
 * main - Entry point of the program.
 *
 * Return: 0 on success.
 */
int main(void)
{
	/* Rest of the main function code goes here... */

	return (0);
}


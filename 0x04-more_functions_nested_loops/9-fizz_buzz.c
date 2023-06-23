#include "main.h"

/**
 * main - Entry point of the program
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else if (i % 3 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
		}
		else if (i % 5 == 0)
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else
		{
			int temp = i;

			if (temp >= 10)
			{
				_putchar(temp / 10 + '0');
				temp %= 10;
			}
			_putchar(temp + '0');
		}

		if (i != 100)
			_putchar(' ');
	}

	_putchar('\n');

	return (0);
}


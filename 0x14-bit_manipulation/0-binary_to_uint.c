#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Convert a binary number to an unsigned int.
 * @b: String containing binary number
 *
 * Return: converted number, or 0 if there's an invalid character or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_val = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		dec_val = dec_val * 2 + (b[i] - '0');
	}

	return (dec_val);
}


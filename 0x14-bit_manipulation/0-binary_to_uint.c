#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Convert  binary number to an unsigned int.
 * @b: String containing binary number.
 *
 * Return: converted number, or 0 if there's an invalid character or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_val = 0;
	int k;

	if (b == NULL)
		return (0);

	for (k = 0; b[k]; k++)
	{
		if (b[k] != '0' && b[k] != '1')
			return (0);

		dec_val = dec_val * 2 + (b[k] - '0');
	}

	return (dec_val);
}


#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	union {
		unsigned int num;
		unsigned char bytes[sizeof(unsigned int)];
	} check;

	check.num = 1;

	/* If the first byte is 1, it's little endian. Otherwise, it's big endian. */
	return (check.bytes[0] == 1);
}


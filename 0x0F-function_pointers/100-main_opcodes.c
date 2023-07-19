#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Prints the opcodes of a given memory address.
 * @start_address: The starting memory address.
 * @num_bytes: The number of bytes to print.
 *
 * Description: This function prints the opcodes of a given memory address
 *              in hexadecimal format, separated by spaces.
 */
void print_opcodes(char *start_address, int num_bytes)
{
	int i;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02hhx ", start_address[i]);
	}

	printf("\n");
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, 1 for incorrect number of arguments,
 *         2 for negative number of bytes.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	/* Calculate the start address of the main function */
	char *main_start_address = (char *)main;

	print_opcodes(main_start_address, num_bytes);

	return (0);
}


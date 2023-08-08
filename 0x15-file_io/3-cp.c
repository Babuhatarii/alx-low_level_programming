#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void copy_file(const char *file_from, const char *file_to);
char *allocate_buffer();
void close_file(int fd);

/**
 * copy_file - Copy content from source file to destination file.
 * @file_from: The source file.
 * @file_to: The destination file.
 *
 * Return: Nothing.
 */
void copy_file(const char *file_from, const char *file_to)
{
	int src_fd, dest_fd, r, w;
	char *buffer;

	if (file_from == NULL || file_to == NULL)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = allocate_buffer();
	src_fd = open(file_from, O_RDONLY);
	dest_fd = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		r = read(src_fd, buffer, 1024);
		if (r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", file_from);
			free(buffer);
			exit(98);
		}

		w = write(dest_fd, buffer, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to file %s\n", file_to);
			free(buffer);
			exit(99);
		}

	} while (r > 0);

	free(buffer);
	close_file(src_fd);
	close_file(dest_fd);
}

/**
 * allocate_buffer - Allocate memory for a buffer.
 *
 * Return: A pointer to the allocated buffer.
 */
char *allocate_buffer()
{
	char *buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Memory allocation failed\n");
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Close a file descriptor.
 * @fd: The file descriptor to be closed.
 *
 * Return: Nothing.
 */
void close_file(int fd)
{
	int result = close(fd);

	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", fd);
		exit(100);
	}
}

/**
 * main - Entry point of the program.
 * @argc: The number of arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);
	return (0);
}


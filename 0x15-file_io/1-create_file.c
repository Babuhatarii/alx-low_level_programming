#include "main.h"

/**
 * create_file - Create a file with given text content.
 * @filename: The name of the file to create.
 * @text_content: A NULL-terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, written_bytes, text_length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_length])
			text_length++;
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_length > 0)
	{
		written_bytes = write(fd, text_content, text_length);
		if (written_bytes != text_length)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}


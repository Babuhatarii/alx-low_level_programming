#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory block to be reallocated
 * @old_size: Size of the old memory block, in bytes
 * @new_size: Size of the new memory block, in bytes
 *
 * Return: Pointer to the reallocated memory block
 *         If new_size is zero and ptr is not NULL, returns NULL and frees ptr
 *         If malloc fails to allocate memory, returns NULL and frees ptr
 *         If new_size is equal to old_size, returns ptr
 *         If ptr is NULL, equivalent to malloc(new_size)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		else
			return (new_ptr);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size < old_size)
		old_size = new_size;

	memcpy(new_ptr, ptr, old_size);
	free(ptr);

	return (new_ptr);
}


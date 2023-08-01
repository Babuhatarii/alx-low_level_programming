#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: Pointer to a pointer to the head of the linked list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tortoise, *hare;
	size_t size = 0;

	if (h == NULL || *h == NULL)
		return (0);

	tortoise = *h;
	hare = (*h)->next;

	while (hare && hare < tortoise)
	{
		*h = hare->next;
		free(tortoise);
		tortoise = *h;
		hare = hare->next;
		size++;
	}

	if (hare)
	{
		while (hare)
		{
			tortoise = hare;
			hare = hare->next;
			free(tortoise);
			size++;
		}
	}

	*h = NULL;
	return (size);
}


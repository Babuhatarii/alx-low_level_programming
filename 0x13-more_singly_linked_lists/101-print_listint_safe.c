#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: Pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t count = 0, loop_flag = 0;

	tortoise = hare = head;
	while (hare != NULL && hare->next != NULL)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		count++;

		if (tortoise == hare)
		{
			loop_flag = 1;
			break;
		}
	}

	if (loop_flag)
	{
		head = head;
		tortoise = head;
		while (tortoise != hare)
		{
			printf("[%p] %d\n", (void *)tortoise, tortoise->n);
			count++;
			tortoise = tortoise->next;
			hare = hare->next;
		}

		printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
		count++;
	}

	return (count);
}


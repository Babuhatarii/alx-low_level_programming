#include "lists.h"
#include <stdio.h>

/**
* print_listint - Prints all the elements of a linked list of integers.
* @head: Pointer to the head of the linked list.
*
* Return: The number of nodes in the linked list.
*/
size_t print_listint(const listint_t *head)
{
	size_t count = 0;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		count++;
	}

	return (count);
}


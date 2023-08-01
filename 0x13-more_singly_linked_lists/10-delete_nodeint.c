#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes node at a given index in a listint_t list
 * @head: Pointer to a pointer to the head of the linked list.
 * @index: Index of the node that should be deleted (starts at 0).
 *
 * Return: 1 if the node was successfully deleted, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current, *temp;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	while (current != NULL)
	{
		if (count == index - 1)
		{
			temp = current->next;
			if (temp == NULL)
				return (-1);

			current->next = temp->next;
			free(temp);
			return (1);
		}

		count++;
		current = current->next;
	}

	return (-1);
}


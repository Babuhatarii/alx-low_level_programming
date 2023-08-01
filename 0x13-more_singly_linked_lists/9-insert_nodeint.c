#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts node at a given position in listint_t list
 * @head: Pointer to a pointer to the head of the linked list.
 * @idx: Index of the list where the new node should be added (starts at 0).
 * @n: Integer value to be added to the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *new_node, *current;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current = *head;
	while (current != NULL)
	{
		if (count == idx - 1)
		{
			new_node->next = current->next;
			current->next = new_node;
			return (new_node);
		}

		count++;
		current = current->next;
	}

	free(new_node);
	return (NULL);
}


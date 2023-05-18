#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at given index of a
 * dlistint_t linked list
 * @head: the head of the current dlistint_t list
 * @index: index of the node to be deleted
 *
 * Return: 1 if success, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	while (!node)
	{
		if (i == index)
		{
			if (node->prev)
				node->prev->next = node->next;
			if (node->next)
				node->next->prev = node->prev;
			if (i == 0)
				*head = node->next;
			free(node);
			return (1);
		}
		node = node->next;
		i++;
	}
	return (-1);
}

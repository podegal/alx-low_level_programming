#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head of the current dlisint_t list
 * @index: index of the node starting from 0
 *
 * Return: address of the nth node or NULL if node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node = 0;

	if (head == NULL)
		return (NULL);
	for (; index != 0; index--)

	while (head != NULL)
	{
		node++;

		if ((node - 1) == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}

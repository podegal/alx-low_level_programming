#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the current dlistint_t list
 * @idx: index the new node will be inserted -- counting from 0
 * @n: value of the new node
 *
 * Return: address of the new node or NULL if it fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = *h, *newNode;
	unsigned int i = 0;

	newNode  = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	while (node != NULL)
	{
		if (i == idx - 1 && node->next == NULL)
			return (add_dnodeint_end(h, n));
		if (i == idx - 1)
		{
			newNode->next = node->next;
			newNode->prev = node;
			node->next = newNode;
			node = newNode;
			node->next->prev = newNode;
			return (newNode);
		}
		node = node->next;
		i++;
	}
	return (NULL);
}

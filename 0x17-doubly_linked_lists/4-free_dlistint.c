#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of the current list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	if (head == NULL)
		return;

	node = head->next;
	while (node != NULL)
	{
		free(head);
		head = head->next;
	}
	free(head);
}

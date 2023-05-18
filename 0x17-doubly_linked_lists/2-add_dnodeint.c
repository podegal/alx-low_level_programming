#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a double linked list
 * @head: the head the dlistint_t list
 * @n: the data in the new node to be added
 *
 * Return: the address of the new element to be added, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	if (*head == NULL)
	{
		newNode->next = NULL;
		newNode->prev = NULL;
	}
	else
	{
		newNode->next = *head;
		newNode->prev = NULL;
		(*head)->prev = newNode;
	}
	*head = newNode;
	return newNode;
}

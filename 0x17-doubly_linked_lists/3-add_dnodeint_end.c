#include "lists.h"

/**
 * add_dnodeint_end - adds a neww node at the end of a dlistint_t list
 * @head: the head of the dlistint_t
 * @n: the value of the new node
 *
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *currentNode;
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
	}
	else
	{
		currentNode = *head;
		while (currentNode->next != NULL)
			currentNode = currentNode->next;
		newNode->prev = currentNode;
		currentNode->next = newNode;
	}
	return newNode;
}

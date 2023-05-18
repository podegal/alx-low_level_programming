#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: The head of the dlistint_t list.
 *
 * Return: The number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
        unsigned int node = 0;

        if (h == NULL)
                return (0);
        while (h != NULL)
        {
                printf("%d\n", h->n);
                node++;
                h  = h->next;
        }
        return (node);
}

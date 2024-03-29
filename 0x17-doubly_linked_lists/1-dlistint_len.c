#include "lists.h"

/**
 * dlistint_len - find the number of elements in a d linked list
 * @h: head of the linked list
 * Return: the number of elements in a dlistint list
 */
size_t dlistint_len(const dlistint_t *h)
{
        unsigned int node = 0;

        if (h == NULL)
                return (0);

        while (h != NULL)
        {
                node++;
                h = h->next;
        }
        return (node);
}

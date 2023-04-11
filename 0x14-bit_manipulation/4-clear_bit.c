#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0.
 * at a given index.
 * @n: pointer of an unsigned long int.
 * @index: index starting from 0 of the bit you want to set.
 *
 * Return: 1 if it worked, -1 if it failed.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;

	if (*n & i)
		*n ^= i;

	return (1);
}

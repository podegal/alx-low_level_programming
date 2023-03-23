

#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - A unction that searches for an integer.
 * @array:  The array to search through.
 * @size: The number of elements.
 * @cmp: comparison function to compare elements.
 * Return: returns the index of the
 * element in the array if it is found, else -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}

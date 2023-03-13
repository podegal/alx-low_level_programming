#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create array of chars and initialize with a specific char
 * @size: size of array
 * @c: fill array values with this char
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	int i = 0;
	ar = malloc(size * sizeof(char));

	if (size <= 0 || ar == NULL)
	{
		return (NULL);
	}

	while (i < (int)size)
	{
		*(ar + i) = c;
		i++;
	}
	*(ar + i) = '\0';
	return (ar);
}

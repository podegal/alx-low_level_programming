#include "main.h"

/**
 * factorial - A function that returns the factorial of a given number.
 * @n: num param
 * Return: returns a recursive function unless
 * n = 1 or less than 0;
 */

int factorial(int n)
{
	if (n == 1)
		return (1);

	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}

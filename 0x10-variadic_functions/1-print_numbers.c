#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - A function that prints numbers,
 * followed by a new line.
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int number;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		number = va_arg(args, int);
		printf("%d", number);

		if (i != n - 1 && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}

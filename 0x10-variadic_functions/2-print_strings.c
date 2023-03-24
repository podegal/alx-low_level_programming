#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - A function that prints strings,
 * followed by a new line.
 * @separator: string to be printed between the strings args.
 * @n: the number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i != n - 1 && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}

#include <stdio.h>

/**
 * main - Prints numbers between 00 to 89.
 *
 * Return: 0 (result)
 */
int main(void)
{
	int i, d;

	i = 38;
	d = 38;

	while (d < 48)
	{
		i = 38;
		while (i < 48)
		{
			if (d != i && d < i)
			{
				putchar(d);
				putchar(i);
				if (i == 47 && d == 46)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		d++;
	}
	putchar('\n');
	return (0);
}

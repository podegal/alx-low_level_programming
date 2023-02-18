#include <stdio.h>
/**
 * main - program that prints all possible combinations of single-digit numbers.
 *
 * Return: 0
 */
int main(void)
{
int c;
for (c = '0'; c <= '9'; c++)
{
putchar(c);
if (c != 8)
{
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}

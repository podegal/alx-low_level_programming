#include <stdio.h>
/**
 * main -  a program that prints the letters of the alphabet without q and e
 *
 * Return: 0 (answer)
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (ch != 'e' && ch != 'q')
{
	putchar(ch);
}
}
putchar('\n');
return (0);
}

#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	/* while (i < 10) 
	{ 
	      putchar(i);
	}*/
	//i++ is required after the putchar(i) curly braces to increment the value of i and avoid an infinite loop 

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}

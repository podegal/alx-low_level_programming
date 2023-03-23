#include <stdio.h>
#include <stdlib.h>
void printOpCode(char *func, int size);

/**
 * main - prints the opcodes of the first
 * n bytes of the main function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if successful, 1 if arguments not equal to 1
 * , 2 if the argument not positive
 */

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		return (2);
	}

	char *begin = (char *)main;

	printOpCode(begin, atoi(argv[1]));

	return (0);
}

/**
 * printOpCode - prints the opcodes of the first n bytes of a function
 * @func: pointer to a function
 * @size: number of bytes to print
 */


void printOpCode(char *func, int size)
{
	int i = 0;

	while (i < size)
	{
		printf("%02x ", func[i] & 0xff);
		i++;
	}
	putchar('\n');
}

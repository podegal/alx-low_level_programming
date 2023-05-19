#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Generates and prints passwords for the crackme5 executable.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char passwrd[7], *codex;
	int length = strlen(argv[1]), i, temp;

	codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	temp = (length ^ 59) & 63;
	passwrd[0] = codex[temp];

	temp = 0;
	for (i = 0; i < length; i++)
		temp += argv[1][i];
	passwrd[1] = codex[(temp ^ 79) & 63];

	temp = 1;
	for (i = 0; i < length; i++)
		temp *= argv[1][i];
	passwrd[2] = codex[(temp ^ 85) & 63];

	temp = 0;
	for (i = 0; i < length; i++)
	{
		if (argv[1][i] > temp)
			temp = argv[1][i];
	}
	srand(temp ^ 14);
	passwrd[3] = codex[rand() & 63];

	temp = 0;
	for (i = 0; i < length; i++)
		temp += (argv[1][i] * argv[1][i]);
	passwrd[4] = codex[(temp ^ 239) & 63];

	for (i = 0; i < argv[1][0]; i++)
		temp = rand();
	passwrd[5] = codex[(temp ^ 229) & 63];

	passwrd[6] = '\0';
	printf("%s", passwrd);
	return (0);
}
}

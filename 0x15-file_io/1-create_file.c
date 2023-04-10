#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file.
 * @text: content writen in the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text)
{
	int fd;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text)
		text = "";

	for (nletters = 0; text[nletters]; nletters++)
		;

	rwr = write(fd, text, nletters);

	if (rwr == -1)
		return (-1);

	close(fd);

	return (1);
}

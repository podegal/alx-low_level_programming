#ifndef __MAIN_H__
#define __MAIN_H__

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text);
int append_text_to_file(const char *filename, char *text);
void error_file(int file_from, int file_to, char *argv[]);
int _putchar(char c);

#endif

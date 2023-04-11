#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
* error_close - prints an error message and exits with code 100
* @fd: the file descriptor to close
*/
void error_close(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
* error_read - prints an error message and exits with code 98
* @filename: the name of the file that can't be read
*/
void error_read(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}

/**
* error_write - prints an error message and exits with code 99
* @filename: the name of the file that can't be written to
*/
void error_write(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}

/**
* main - copies the content of a file to another file
* @argc: the number of arguments passed to the program
* @argv: an array of pointers to the arguments passed to the program
*
* Return: Always 0
*/
int main(int argc, char **argv)
{
	int fd_from, fd_to, r_count, w_count;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_read(argv[1]);

	fd_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_to == -1)
		error_write(argv[2]);

	while ((r_count = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		w_count = write(fd_to, buffer, r_count);
		if (w_count == -1)
			error_write(argv[2]);
		if (w_count != r_count)
			error_write(argv[2]);
	}

	if (r_count == -1)
		error_read(argv[1]);

	if (close(fd_from) == -1)
		error_close(fd_from);
	if (close(fd_to) == -1)
		error_close(fd_to);

	return (0);
}

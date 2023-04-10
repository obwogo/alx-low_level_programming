#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * owner: OBWOGO TOM
 * read_textfile - that reads a text file and prints
 * @filename: variable pointer
 * Description: Write a function that reads a text file and prints it
 * to the POSIX standard output.
 * Return: the actual number of letters it could read and print, 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, let, w;
	char *tom;

	tom = malloc(letters);
	if (tom == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(tom);
		return (0);
	}

	let = read(file, tom, letters);

	w = write(STDOUT_FILENO, tom, let);

	close(file);

	return (w);
}

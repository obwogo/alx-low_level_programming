#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * owner: OBWOGO TOM
 * create_file - function that creates a file.
 * Description: Create a function that creates a file.
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int p = 0, file;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	while (text_content[p] != '\0')
	{
		p++;
	}

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	write(file, text_content, p);

	return (1);
}

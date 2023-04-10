#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * owner: OBWOGO TOM
 * append_text_to_file - that appends text at the end of a file
 * Description: function that appends text at the end of a file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int t = 0, fil;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	while (text_content[t] != '\0')
	{
		t++;
	}

	fil = open(filename, O_WRONLY | O_APPEND);

	if (fil == -1)
		return (-1);

	write(fil, text_content, t);

	return (1);
}

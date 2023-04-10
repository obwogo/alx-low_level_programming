#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * owner: OBWOGO TOM
* main - program that copies the content of a file to another file
* @argc: num argument
* @argv: string argument
* Return: 0
*/

int main(int argc, char *argv[])
{
int file1, file2;
int num = 1024, num2 = 0;
char buf[1024];

if (argc != 3)
	dprintf(STDERR_FILENO, "Usage: cp file1 file_to\n"), exit(97);
file1 = open(argv[1], O_RDONLY);
if (file1 == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
}
file2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
	| S_IRGRP | S_IWGRP | S_IROTH);
if (file2 == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	close(file1), exit(99);
}
while (num == 1024)
{
	num = read(file1, buf, 1024);
	if (num == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	num2 = write(file2, buf, num);
	if (num2 < num)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
}

if (close(file1) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file1), exit(100);

if (close(file2) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file2), exit(100);

return (0);
}

#include "main.h"
/**
 * print_rev -prints a string in reverse
 * @s: a string
 *
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int i = 0;
	while (s[i] != 0)
	{
		i++;
	}
	while (s[i] >= 0)
	while (i > 0)
	{
		_putchar(s[i]);
		i--;
		_putchar(s[i]);
	}
	_putchar('\n');
}

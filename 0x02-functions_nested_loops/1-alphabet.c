#include "stdio.h"
#include "stdio.h"

/**
  * print_alphabet - Make the alphabet
  *
  * Return: void
  */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		print_putchar(c);
	}

	_putchar('\n');
}

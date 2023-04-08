#include "main.h"

/**
 * owner: OBWOGO TOM
 * get_endianness - check endianness
 *
 * Return: 1 or 0
 */
int get_endianness(void)
{
	unsigned int v = 1;
	char *c = (char *)&v;

	if (*c)
		return (1);
	else
		return (0);
}

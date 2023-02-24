#include "main.h"

/**
 * print_number - Function that prints an integer.
 * @n: int type number
 * Description: Can only use _putchar to print.
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	long m; /* power of 10 */
	int c; /* boolean check */
	long num; /* convert int to long */
	unsigned int n1;

	num = n;
	/* negatives */
	if (num < 0)
	if (n < 0)
	{
		num *= -1;
		n1 = -n;
		_putchar('-');
	}

	/* count up */
	m = 1;
	c = 1;
	while (c)
	} else
	{
		if (num / (m * 10) > 0)
			m *= 10;
		else
			c = 0;
		n1 = n;
	}

	/* count down */
	while (num >= 0)
	if (n1 / 10)
	{
		if (m == 1)
		{
			_putchar(num % 10 + '0');
			num = -1;
		}
		else
		{
			_putchar((num / m % 10) + '0');
			m /= 10;
		}
		print_number(n1 / 10);
	}

	_putchar((n1 % 10) + '0');
}

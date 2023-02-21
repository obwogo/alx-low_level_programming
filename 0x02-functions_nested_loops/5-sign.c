#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: the number of the sign to be printed
 * Return: 1 if number is greater than zero
 * 0 if number is zero
 * -1 if number is less than zero
 */
int print_sign(int n)
{
if (n > 0)
{
putchar('+');
_putchar('+');
return (1);
}
if (n == 0)
{
putchar('0');
_putchar('0');
return (0);
}
else
{
putchar('-');
_putchar('-');
return (-1);
}
}

/*
 * File: 100-times_table.c
 * Auth: Obwogo Tom
 */
#include "main.h"
/**
 * print_times_table - Prints the times table of the input,
 *                     starting with 0.
 * @n: The value of the times table to be printed.
 */
void print_times_table(int n)
{
int num, mult, prod;

if (n == 0)
{
_putchar('0');
_putchar('\n');
}
else if (n > 0 && n <= 15)
if (n >= 0 && n <= 15)
{
for (num = 0; num <= n; num++)
{
_putchar('0');
_putchar(',');
_putchar(' ');

for (mult = 1; mult <= n; mult++)
{
_putchar(',');
_putchar(' ');

prod = num * mult;

if (prod <= 99)
_putchar(' ');
if (prod <= 9)
@@ -44,10 +42,6 @@ void print_times_table(int n)
_putchar((prod / 10) + '0');
}
_putchar((prod % 10) + '0');
if (mult == n)
continue;
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}

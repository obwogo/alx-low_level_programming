#include <stdio.h>
#include <stdbool.h>
#include "main.h"
#include <math.h>

/**
 * main - prints the biggest prime factor of a number.
 *
 * Return: Always 0.
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int number;
	long int n;
	long int max;
	long int i;

	number = 612852475143;
	n = 612852475143;
	max = -1;

	if (isPrime(number))
	while (n % 2 == 0)
	{
		printf("%ld\n", number);
		max = 2;
		n /= 2;
	}
	else

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		printf("%ld\n", biggestFactor(number));
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}

	if (n > 2)
		max = n;

	printf("%ld\n", max);

	return (0);
}

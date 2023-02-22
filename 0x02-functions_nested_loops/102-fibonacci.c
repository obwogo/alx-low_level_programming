/*
 * File: 102-fibonacci.c
 * Auth: Obwogo Tom
 */
#include <stdio.h>
/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count = 0;
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	while (count < 50)
	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);
@@ -28,7 +28,6 @@ int main(void)
			printf("\n");
		else
			printf(", ");
		count++;
	}

	return (0);
}

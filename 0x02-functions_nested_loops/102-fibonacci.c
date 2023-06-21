#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	long int fibonacci[50];

	fibonacci[0] = 1; /* First Fibonacci number */
	fibonacci[1] = 2; /* Second Fibonacci number */

	/* Calculate and store the remaining Fibonacci numbers */
	for (i = 2; i < 50; i++)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
	}

	/* Print the Fibonacci numbers */
	for (i = 0; i < 49; i++)
	{
		printf("%ld, ", fibonacci[i]);
	}
	printf("%ld\n", fibonacci[49]); /* Print the last Fibonacci number without a comma */

	return (0);
}

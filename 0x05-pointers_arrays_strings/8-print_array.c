#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers
 * @a: The array
 * @n: The number of elements to print
 */
void print_array(int *a, int n)
{
	int i;

	/* Print the first element */
	printf("%d", a[0]);

	/* Print the remaining elements separated by comma and space */
	for (i = 1; i < n; i++)
		printf(", %d", a[i]);

	printf("\n");
}

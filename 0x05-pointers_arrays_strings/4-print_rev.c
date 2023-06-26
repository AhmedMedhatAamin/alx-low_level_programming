#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: The string to be printed
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	i--; /* Decrement to skip the null terminator */

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}

	_putchar('\n');
}

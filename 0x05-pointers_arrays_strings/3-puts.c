#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string followed by a new line
 * @str: The string to print
 */
void _puts(char *str)
{
	int i = 0;

	/* Iterate through the string until the null terminator is encountered */
	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}

	putchar('\n');
}

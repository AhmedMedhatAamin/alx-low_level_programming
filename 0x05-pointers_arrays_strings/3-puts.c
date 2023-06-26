#include "main.h"

/**
 * _putchar - Writes a character to stdout
 * @c: The character to be written
 *
 * Return: On success, the character written.
 *         On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	/* Function implementation */
}

/**
 * _puts - Prints a string followed by a new line
 * @str: The string to be printed
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

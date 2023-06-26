#include "main.h"

/**
 * _putchar - Writes a character to stdout
 * @c: The character to be written
 *
 * Return: Always 0 (Success)
 */
int _putchar(char c)
{
	return (0);
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

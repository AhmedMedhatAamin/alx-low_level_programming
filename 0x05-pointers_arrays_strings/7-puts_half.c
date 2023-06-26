#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - Prints the second half of a string
 * @str: The string
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int start;

	/* Calculate the starting index based on the length of the string */
	if (length % 2 == 0)
		start = length / 2;
	else
		start = (length + 1) / 2;

	/* Print the characters from the starting index until the end */
	while (str[start] != '\0')
	{
		putchar(str[start]);
		start++;
	}

	putchar('\n');
}

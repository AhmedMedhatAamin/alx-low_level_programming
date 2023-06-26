#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to dest
 * @dest: The destination buffer
 * @src: The source string
 *
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	/* Copy each character from src to dest */
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	/* Append the terminating null byte */
	*dest = '\0';

	return ptr;
}

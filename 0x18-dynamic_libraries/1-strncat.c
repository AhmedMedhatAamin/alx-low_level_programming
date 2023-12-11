#include <stdio.h>

/**
 * _strncat - Concatenates two strings, using at most n bytes from src.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of bytes to be copied from src.
 *
 * Return: Pointer to the resulting string dest.
 */
char* _strncat(char* dest, char* src, int n)
{
    char* dest_start = dest;

    /* Move the pointer to the end of the destination string */
    while (*dest != '\0')
    {
        dest++;
    }

    /* Copy at most n bytes from the source string to the destination string */
    while (*src != '\0' && n > 0)
    {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    *dest = '\0';

    return dest_start;
}

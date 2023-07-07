#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
    int len = 0;
    int i;

    if (!*s) /* Empty string */
        return (1);

    while (*(s + len))
        len++;

    for (i = 0; i < len / 2; i++)
    {
        if (s[i] != s[len - i - 1])
            return (0);
    }

    return (1);
}

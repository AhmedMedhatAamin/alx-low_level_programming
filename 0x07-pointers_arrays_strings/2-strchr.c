#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: The string to search.
 * @c: The character to locate.
 *
 * Return: Pointer to the first occurrence of the character c in the string s,
 *         or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
    int itr;

    for (itr = 0; s[itr] != '\0'; itr++)
    {
        if (s[itr] == c)
            return (s + itr);
    }

    return ('\0'); /* Return NULL if character is not found */
}

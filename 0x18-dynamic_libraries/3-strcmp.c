#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: The first string to be compared
 * @s2: The second string to be compared
 *
 * Return: An integer less than, equal to, or greater than zero if s1 is found,
 * respectively, to be less than, to match, or be greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
    int i = 0;

    while (s1[i] == s2[i])
    {
        if (s1[i] == '\0')
            return 0;
        i++;
    }

    return s1[i] - s2[i];
}

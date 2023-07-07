#include <stdio.h>
#include "main.h"

int wildcmp(char *s1, char *s2)
{
    // If both strings are empty, they are considered identical
    if (*s1 == '\0' && *s2 == '\0')
        return 1;

    // If the current characters match or s2 has a wildcard '*', move to the next characters
    if (*s1 == *s2 || (*s2 == '*' && *(s2 + 1) != '\0' && *s1 != '\0'))
        return wildcmp(s1 + 1, s2 + 1);

    // If s2 has a wildcard '*', check all possibilities by moving s1 or s2
    if (*s2 == '*')
        return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

    // If none of the above conditions match, the strings are not identical
    return 0;
}

#include <stdio.h>

char *_strchr(char *s, char c)
{
    while (*s != '\0')
    {
        if (*s == c)
        {
            return s;  // Return pointer to the first occurrence of character c
        }
        s++;
    }

    if (*s == c)
    {
        return s;  // Return pointer to the null terminator
    }

    return NULL;  // Character c not found
}

int main(void)
{
    char *s = "hello";
    char *f;

    f = _strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    }

    return 0;
}

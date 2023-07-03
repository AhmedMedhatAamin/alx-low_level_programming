/**
 * _strchr - Locates a character in a string
 * @s: The string to search
 * @c: The character to locate
 *
 * Return: Pointer to the first occurrence of the character in the string,
 *         or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
    /* Iterate through the string */
    while (*s != '\0')
    {
        /* If the current character matches the target character, return the pointer */
        if (*s == c)
        {
            return s;
        }
        /* Move to the next character */
        s++;
    }

    /* Check the null terminator as well */
    if (*s == c)
    {
        return s;
    }

    /* Character not found, return NULL */
    return NULL;
}

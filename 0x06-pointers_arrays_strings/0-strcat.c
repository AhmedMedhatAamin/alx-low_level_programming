char *_strcat(char *dest, char *src)
{
    char *ptr = dest;

    // Move the pointer to the end of dest
    while (*ptr != '\0')
        ptr++;

    // Copy characters from src to dest
    while (*src != '\0')
    {
        *ptr = *src;
        ptr++;
        src++;
    }

    // Add a terminating null byte
    *ptr = '\0';

    // Return the resulting string dest
    return dest;
}

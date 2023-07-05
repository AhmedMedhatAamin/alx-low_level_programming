#include <stdio.h>

/**
 * _strncpy - Copies at most n characters from src to dest
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of characters to be copied
 *
 * Return: Pointer to the resulting string dest
 */
char* _strncpy(char* dest, char* src, int n) {
    char* dest_start = dest;
    int i = 0;

    while (i < n && src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }

    while (i < n) {
        dest[i] = '\0';
        i++;
    }

    return dest_start;
}

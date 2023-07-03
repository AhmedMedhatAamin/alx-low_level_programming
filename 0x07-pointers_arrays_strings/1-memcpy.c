#include <stdio.h>

/**
 * _memcpy - Copies a memory area
 * @dest: Pointer to the destination memory area
 * @src: Pointer to the source memory area
 * @n: Number of bytes to copy
 *
 * Return: Pointer to the destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int itr;

    /* Iterate through each byte in the source memory area */
    for (itr = 0; itr < n; itr++)
    {
        /* Copy the byte from source to destination */
        dest[itr] = src[itr];
    }

    /* Return the pointer to the destination memory area */
    return dest;
}

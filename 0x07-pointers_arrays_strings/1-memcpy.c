#include <stdio.h>

/**
 * _memcpy - Copies n bytes from src to dest
 * @dest: Pointer to the destination memory area
 * @src: Pointer to the source memory area
 * @n: Number of bytes to copy
 *
 * Return: Pointer to the destination memory area
 */
void *_memcpy(void *dest, const void *src, unsigned int n)
{
    unsigned char *dest_ptr = (unsigned char *)dest;       // Convert dest pointer to unsigned char pointer
    const unsigned char *src_ptr = (const unsigned char *)src;   // Convert src pointer to const unsigned char pointer

    while (n--)
    {
        *dest_ptr++ = *src_ptr++;   // Copy byte by byte from src to dest
    }

    return dest;
}

int main(void)
{
    char buffer[98] = {0};
    char buffer2[98] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

    simple_print_buffer(buffer, 98);    // Print the contents of buffer before memcpy
    _memcpy(buffer + 50, buffer2, 10);   // Copy 10 bytes from buffer2 to buffer starting from offset 50
    printf("-------------------------------------------------\n");
    simple_print_buffer(buffer, 98);    // Print the contents of buffer after memcpy

    return 0;
}

#include "main.h"
#include <stdio.h>

char* _strcat(char* dest, char* src) {
    // Move the pointer to the end of the destination string
    while (*dest != '\0') {
        dest++;
    }

    // Copy the characters from the source string to the destination string
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }

    // Add the null-terminating character to mark the end of the concatenated string
    *dest = '\0';

    // Return a pointer to the destination string
    return dest;
}

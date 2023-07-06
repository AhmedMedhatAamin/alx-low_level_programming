#include <stdio.h>
#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to calculate the factorial of.
 *
 * Return: The factorial of n. If n is lower than 0, returns -1.
 */
int factorial(int n)
{
    if (n < 0)
        return -1;
    else if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

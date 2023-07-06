#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The natural square root of n.
 *         If n does not have a natural square root, returns -1.
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return -1;
    else if (n == 0 || n == 1)
        return n;
    else
        return calculate_sqrt(n, 1, n);
}

int calculate_sqrt(int n, int start, int end)
{
    int mid = (start + end) / 2;

    if (start <= end)
    {
        if (mid * mid == n)
            return mid;
        else if (mid * mid < n)
            return calculate_sqrt(n, mid + 1, end);
        else
            return calculate_sqrt(n, start, mid - 1);
    }

    return end;
}

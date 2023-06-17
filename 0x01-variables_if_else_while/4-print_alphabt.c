#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program prints the alphabet in lowercase,
 * excluding the letters 'q' and 'e', using only two putchar functions.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter = 'a';
    while (letter <= 'z')
    {
        if (letter != 'e' && letter != 'q')
        {
            putchar(letter);
            letter++;
        }
        else
        {
            letter++;
        }
    }
    putchar('\n');
    return (0);
}

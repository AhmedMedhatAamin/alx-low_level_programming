#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

int main(void)
{
    char password[PASSWORD_LENGTH + 1]; // +1 for null terminator
    int i;

    srand(time(0));

    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        int randomValue = rand() % 62;
        char nextChar;

        if (randomValue < 26)
            nextChar = 'A' + randomValue; // Uppercase letter
        else if (randomValue < 52)
            nextChar = 'a' + (randomValue - 26); // Lowercase letter
        else
            nextChar = '0' + (randomValue - 52); // Digit

        password[i] = nextChar;
    }

    password[PASSWORD_LENGTH] = '\0'; // Null terminator

    printf("%s\n", password);

    return 0;
}

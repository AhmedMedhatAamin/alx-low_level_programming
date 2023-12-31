#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 15

int main(void)
{
    char password[PASSWORD_LENGTH + 1]; /* +1 for null terminator */
    int i;

    srand(time(0));

    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        int randomValue = rand() % 3;
        char nextChar;

        if (randomValue == 0)
            nextChar = 'A' + (rand() % 26); /* Uppercase letter */
        else if (randomValue == 1)
            nextChar = 'a' + (rand() % 26); /* Lowercase letter */
        else
            nextChar = '0' + (rand() % 10); /* Digit */

        password[i] = nextChar;
    }

    password[PASSWORD_LENGTH] = '\0'; /* Null terminator */

    printf("%s\n", password);

    return 0;
}

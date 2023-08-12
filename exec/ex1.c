#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    printf("PID of ex1.c = %d\n", getpid());

    char *args[] = {"hello", "NESO", "Academy", NULL};
    execv("./ex2", args);

    // This code won't be reached after execv
    printf("This line will not be printed due to execv\n");

    return 0;
}


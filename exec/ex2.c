#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
	printf("we are in ex2.c\n");
	printf("pid of ex2.c = %d\n", getpid());
	return 0;
}

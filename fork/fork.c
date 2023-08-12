#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>


int main() {
  fork();  // creat proccess information
  fork();
  fork();
  printf("hello ahmed!\n PID = %d\n", getpid());  // Print process information
  return 0;
}

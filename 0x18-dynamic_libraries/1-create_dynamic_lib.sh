#!/bin/bash

# Compile all .c files in the current directory into object files
gcc -fPIC -c *.c

# Create the dynamic library liball.so from the compiled object files
gcc -shared -o liball.so *.o

# Clean up the object files
rm *.o

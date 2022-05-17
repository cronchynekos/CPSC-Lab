
#!/bin/bash

#Author Nathanael kim
#Program: Interview


rm *.o
rm *.out

echo "~Assemble Interview.asm"
nasm -f elf64 -l interview.lis -o interview.o interview.asm

echo "~Compile Main.c"
gcc -c -Wall -m64 -no-pie -o main.o main.c -std=c11

echo "~Link the object files using the gcc linker standard 2017"
gcc -m64 -no-pie -o final.out -std=c++17 c main.o interview.o

echo "~Run the program Interview"
./final.out

echo "~Have a very nice evening"


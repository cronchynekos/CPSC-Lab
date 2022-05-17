

#!/bin/bash

#Author Nathanael kim
#Program: Harmonic mean




echo "~Assemble Control.asm"
nasm -f elf64 -l control.lis -o control.o control.asm

echo "~Assemble Fill.asm"
nasm -f elf64 -l fill.lis -o fill.o fill.asm

echo "~Assemble Sum.asm"
nasm -f elf64 -l sum.lis -o sum.o sum.asm

echo "~Compile Main.c"
gcc -c -Wall -m64 -no-pie -o main.o main.c -std=c11

echo "~Compile Display.cpp"
g++ -c -Wall -m64 -fno-pie -no-pie -o display.o display.cpp -std=c++17

echo "~Compile isfloat.cpp"
g++ -c -Wall -m64 -fno-pie -no-pie -o isfloat.o isfloat.cpp -std=c++17

echo "~Link the object files using the gcc linker standard 2017"
g++ -m64 -no-pie -o final.out -std=c++17 control.o fill.o sum.o main.o display.o isfloat.o

echo "~Run the program Harmonic mean"
./final.out

echo "~Have a very nice evening"
rm *.o
rm *.out

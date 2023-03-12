#!/bin/bash

gcc -c *.c
ar rcs liball.a *.o
gcc -o main main.o -L. liball.a

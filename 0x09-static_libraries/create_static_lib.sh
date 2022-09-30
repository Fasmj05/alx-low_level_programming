#!/bin/bash
gcc -wall -pedantic -werror -wextra -std=gnu89 -c *.c
ar -rcs liball.a *.o
ranlib liball.a

#!/bin/bash
gcc -wall -pedantic -werror -wextra -std=gnu89 -c *.c
ar -rc liball.a *.o
ranlib liball.a

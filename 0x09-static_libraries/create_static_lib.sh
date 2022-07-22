#!/bin/bash
gcc -wall -pendantic -werror -wextra -c *.c
ar -rc libball.a *.o
ranlib liball.a

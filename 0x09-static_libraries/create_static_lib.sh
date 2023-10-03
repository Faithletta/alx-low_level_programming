#!/bin/bash
gcc -wall -pendantic -wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a

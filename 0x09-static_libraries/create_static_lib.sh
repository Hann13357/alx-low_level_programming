#!/bin/bash
gcc -Wall -pedantic -Werrot -Wextra -c*.c
ar -rc liball.a*.o
ranlib liball.o

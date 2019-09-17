#!/bin/bash
gcc -fPIC -c -Wall *.c
gcc -shared -Wl,-soname,liball.so -o liball.so *.o

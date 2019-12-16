#!/bin/bash
gcc -fPIC -c mirror_puts.c
gcc -shared -o libmirror.so mirror_puts.o

#!/bin/bash
gcc -shared -fPIC won.c -o gigam.so
export LD_PRELOAD=./gigam.so:$LD_LIBRARY_PATH

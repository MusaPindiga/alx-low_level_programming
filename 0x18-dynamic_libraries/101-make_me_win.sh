#!/bin/bash
gcc -fPIC -c gm.c
gcc -shared -o lib101-make_me_win.so *.o
LD_PRELOAD=101-make_me_win.sh

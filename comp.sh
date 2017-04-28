#! /bin/bash
gcc -shared -fPIC -DKXVER=3 io.c -o io.so -l wiringPi

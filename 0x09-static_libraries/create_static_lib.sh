#!/bin/bash
gcc -c *.c
ar rc libal.a *.o
ranlib libal.a

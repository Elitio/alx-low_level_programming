#!/bin/bash

cc -fPIC -c *.c
ar rc liball.a *.o
rm -f *o

#!/bin/bash

clang -g -O1 -Wall -pedantic -fsanitize=address -fsanitize=undefined -fno-omit-frame-pointer -o sqllitecobol main.c ocshell.c -lsqlite3

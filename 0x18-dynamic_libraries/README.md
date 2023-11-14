# Project: Dynamic Libraries in C

## Overview
This project is part of the ALX Low-Level Programming curriculum and focuses on creating dynamic libraries in the C programming language. The tasks involve developing a dynamic library containing specific functions and creating a script to generate a dynamic library from multiple C files.

## Author
- **Author:** mjayivi1

## GitHub Repository
- **Repository:** [alx-low_level_programming](https://github.com/mjayivi1/alx-low_level_programming)

## Tasks
### Task 0: Creating the Dynamic Library libdynamic.so
The goal is to create a dynamic library named libdynamic.so containing various functions. The functions are defined in separate source files and compiled into a shared library.

### Task 1: Creating a Script to Generate liball.so
A bash script (1-create_dynamic_lib.sh) is provided to automate the process of creating a dynamic library named liball.so from all the .c files in the current directory.

## How to Use
Follow the steps below to compile and test the dynamic libraries:

1. **Task 0: Creating libdynamic.so**
   ```bash
   gcc -Wall -fPIC -c *.c
   gcc -shared -o libdynamic.so *.o

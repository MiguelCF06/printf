## _printf
This is our own function printf in C that is part of the Holberton framework and first big project for the cohort 11.
*  **Prototype:**  ```int _printf(const char *, ...);```
## Requirementes and authorized functions:

* All files will be compiled on Ubuntu 14.04 LTS
* Programs and functions will be compiled with gcc 4.8.4 using flags -Wall -Werror -Wextra and -pedantic
* Code must follow the Betty style
* Global variables are not allowed
1.      write (man 2 write)
2.      malloc (man 3 malloc)
3.      free (man 3 free)
4.      va_start (man 3 va_start)
5.      va_end (man 3 va_end)
6.      va_copy (man 3 va_copy)
7.      va_arg (man 3 va_arg)

## Tasks Made it
+ Write function that produces output with conversion specifiers ```c```,```s```, and ```%```.
+ Conversion of specifiers ```i``` and ```d```.
+ Man page for the created function.
+ Conversion of specifier ```b``` prints a decimal number coverted to binary. 
+ Conversion of specifier ```S``` prints a string but with a condition.
+ Conversion of specifier ```r``` prints in reverse a string.
+ Conversion of specifier ```R``` prints a string in rot13.
+ Conversion of specifier ```u``` prints a unsigned int.
+ Conversion of specifier ```o``` prints an octal number.
## Files in the repo
* **_printf.c**: This contains the prototype and makes the different convertions that are in the other files.
* **_putchar.c**: This file contain the syscall write and print a character to the standar output.
* **holberton.h**: This file contain all the prototypes and the struct
* **print_functions.c**: This file has the functions that are mandatory like print strings, chars, integers and decimals.
* **print_advance.c**: This file has some of the functions that are advanced like print a string in reverse, or the specifier S and the prints rot13 string.

## Authors

* [Miguel Angel Cipamocha Figueredo](https://github.com/MiguelCF06)
* [Brian Steven Mosquera Gamboa](https://github.com/SimpleSteven)


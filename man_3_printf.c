_printf(3)                       Manual page

NAME
    _printf - format and print data

SYNOPSIS
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(char c, int *char_print);
int print_string(char *str, int *char_print);
int print_integer(int num, int *char_print);
int print_binary(unsigned int num, int *char_print);

DESCRIPTION
    The _printf function formats and prints data according to the format specified usng
    conversion specifiers.
    These format specifiers control how the data is
    printed.

    The following format specifiers are supported:

    ·   %c: Print a character.

    ·   %s: Print a string.

    ·   %d or %i: Print an integer.

    ·   %b: Print an unsigned integer in binary.
      
    ·   %i: Print an integer.

    ·   %%: Print a "%".



RETURN VALUE
    _printf returns the number of characters printed (excluding the null byte
    used to end the output) on success. On error, it returns -1.

EXAMPLES
    int count;
    count = _printf("Hello, %s! Your score is %d.\n", "User", 42);
    // This will print "Hello, User! Your score is 42." and 'count' will be 29.

    int bin_count;
    bin_count = _printf("Binary representation: %b\n", 10);
    // This will print "Binary representation: 1010." and 'bin_count' will be 24.

    int null_count;
    null_count = _printf("String is null: %s\n", NULL);
    // This will print "String is null: (null)." and 'null_count' will be 21.

AUTHOR
    This manual page was created by Junus Whitaker.

SEE ALSO
    printf(3), putchar(3)


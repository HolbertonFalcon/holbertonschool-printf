#include <stdio.h>
#include "main.h"

int _printf(const char *format, ...) {
    int printed_chars = 0;  // Keep track of the number of characters printed
    va_list args;           // Declare a variable-argument list

    // Start processing the variable arguments
    va_start(args, format);

    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] != '%') {
            // If the character is not '%', just print it and continue
            putchar(format[i]);
            printed_chars++;
        } else {
            // If the character is '%', we need to handle a conversion specifier
            i++;  // Move to the character after '%'
            if (format[i] == 'd' || format[i] == 'i') {
                // Handle %d and %i
                int num = va_arg(args, int);  // Extract the next argument as an int
                printed_chars += printf("%d", num);  // Print the int and update the count
            } else {
                // If it's not %d or %i, just print the '%' character
                putchar('%');
                printed_chars++;
            }
        }
    }

    // End processing the variable arguments
    va_end(args);

    return printed_chars;  // Return the total number of characters printed
}

int main() {
    int num = 39;
    int result = _printf("The answer is: %d\n", num);
    printf("Total characters printed: %d\n", result);
    return 0;
}

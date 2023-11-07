#include "main.h"

/**
 * _printf - a function that produces output according to format
 * @format: a character string
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
    int char_print = 0;
    va_list arg;

    if (format == NULL)
        return (-1);
    va_start(arg, format);
    while (*format)
    {
        if (*format == '%')
        {
            format++;
            while (*format == ' ')
                format++;
            if (*format == '\0')
                return (-1);
            if (*format == '%')
            {
                print_char('%', &char_print);
            }
            else if (*format == 'c')
            {
                print_char(va_arg(arg, int), &char_print);
            }
            else if (*format == 's')
            {
                char *str = va_arg(arg, char*);
                if (str == NULL)
                {
                    print_string("(null)", &char_print);
                }
                else
                {
                    print_string(str, &char_print);
                }
            }
            else if (*format == 'd' || *format == 'i')
            {
                print_integer(va_arg(arg, int), &char_print);
            }
            else if (*format == 'b')
            {
                print_binary(va_arg(arg, unsigned int), &char_print);
            }
        }
        else
        {
            print_char(*format, &char_print);
        }
        format++;
    }
    va_end(arg);
    return (char_print);
}
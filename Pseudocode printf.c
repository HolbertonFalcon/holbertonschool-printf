function _printf(format, ...):
initialize count to 0
initialize args with variadic arguments
initialize i to 0 

while format[i] is not null:
    if format [i] is not equal to '%':
       Print format[i]
       Increment count by 1
else:
    Increment i by 1 // Move past the %
    if format[i] is 'c':
        Get a character argument from args
        Print the character
        Increment count by 1
    else if format[i] is 's'
        Get a string argument from args
        while string arguement is not null:
            Print the chaaracter
            Increment count by 1
    else if format[i] is '%'
        Print '%'
        Increment count by 1

End the loop

Return count
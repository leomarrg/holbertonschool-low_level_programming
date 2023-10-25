this is read me file

*********
working with excersise 10

10. Write a function that convert a string to an integer.

Prototype: int _atoi(char *s);
The number in the string can be preceded by an infinite number of characters
You need to take into account all the - and + signs before the number
If there are no numbers in the string, the function must return 0
You are not allowed to use long
You are not allowed to declare new variables of “type” array
You are not allowed to hard-code special values
We will use the -fsanitize=signed-integer-overflow gcc flag to compile your code.
FYI: The standard library provides a similar function: atoi. Run man atoi to learn more.

im taking this step by step.


first will create files and add to main.h the prototype
100-main.c
100-atoi.c

second 
iterate through the string and check every char if there is a plus(+) or minus(-) sign before a number
if there is a number after a sign save that number sequence in tempPtr

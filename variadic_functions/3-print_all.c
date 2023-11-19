#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * printChar - prints a char
 * @arg: argument init
 * Return: returns nothing
*/
void printChar(va_list arg)
{
	char tmpChar;

	tmpChar = va_arg(arg, int);
	printf("%c", tmpChar);
}
/**
 * printStr - prints a string
 * @arg: argument init
 * Return: returns nothing
*/
void printStr(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);
	if (str == NULL)
		printf("(nil)");
	printf("%s", str);
}
/**
 * printInt - prints an int
 * @arg: argument init
 * Return: returns nothing
*/
void printInt(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%i", num);
}
/**
 * printFloat - prints a float
 * @arg: argument init
 * Return: returns nothing
*/
void printFloat(va_list arg)
{
	float fltNum;

	fltNum = va_arg(arg, double);
	printf("%f", fltNum);
}
/**
 * print_all - prints anything
 * @format: format of the strings
 * Return: returns nothing
*/
void print_all(const char * const format, ...)
{
	char *separator;
	int i, j;
	va_list args;
	printAll_t types[] = {
		{"c", printChar},
		{"s", printStr},
		{"i", printInt},
		{"f", printFloat}
	};

	va_start(args, format);
	i = 0;
	separator = "";

	while (format && (*(format + i)))
	{
		j = 0;
		while (j < 4 && (*(format + i) != *(types[j].charType)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			types[j].print(args);
			separator = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(args);
}




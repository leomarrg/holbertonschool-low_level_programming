#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int sum_them_all(const unsigned int, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

typedef struct printAll
{

char *charType;
void (*print)(va_list arg);

} printAll_t;

void print_all(const char * const format, ...);
void printChar(va_list arg);
void printStr(va_list arg);
void printInt(va_list arg);
void printFloat(va_list arg);

#endif

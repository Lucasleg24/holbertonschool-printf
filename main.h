#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
char _printc(va_list list);
char _prints(va_list list);


/**
 * struct convert - Structure used in the _printf file for
 * searching a matching character after a % and execute
 * a matching function.
 */
struct convert
{
	char check;
	void (*f)(va_list);
};

#endif

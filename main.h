#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);

struct convert
{
	char check;
	void (*f)(va_list);
};

#endif

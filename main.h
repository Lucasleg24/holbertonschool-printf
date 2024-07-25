#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _printc(va_list list);
int _prints(va_list list);
int _printm(__attribute__ ((unused)) va_list list);
int _printd(va_list list);
int Divide(int result, int count);


/**
 * struct convert - Structure used in the _printf file for
 * searching a matching character after a % and execute
 * a matching function.
 * @check: caracter check correspondance with string
 * @f: pointer to select a function
 */
typedef struct convert
{
	char *check;
	int (*f)(va_list);
} convert_t;

#endif

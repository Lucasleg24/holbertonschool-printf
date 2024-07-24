#include "main.h"

/**
 * _printf - recode the function printf
 * @format: variable with string
 * Return: return the number of caracter print with the function
 */

int _printf(const char *format, ...)
{

	va_list list;
	int i = 0;
	int j = 0;
	int count = 0;

	convert_t spec[] = {
		{"c", _printc},
		{"s", _prints},
		{"%", _printm},
		{NULL, NULL}
	};
	va_start(list, format);
	count += _exec_print(list, int i, int j, int count, typedef struct convert_t);

	return (count);
}

/**
 * _exec_print - execute the code for return the result at the _printf function
 * @format: string for print and select the modulo
 * @list: contain argument
 * @i: variable for check format
 * @j: variable for check structure
 * @count: variable for count the number of caracter print
 * @convert_t: structure for select the function
 * Return: return the value of count
 */

int _exec_print(const char *format, va_list list, int i, int j, int count, typedef struct convert_t)
{
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			while (spec[j].check != NULL)
			{
				if (*(spec[j].check) == format[i + 1])
				{
					count += spec[j].f(list);
					i += 2;
				}
				j++;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
			i++;
		}
		j = 0;
	}
	va_end(list);
	return (count);
}

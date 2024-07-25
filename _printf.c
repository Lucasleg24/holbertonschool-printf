#include "main.h"
int _exec_print(const char *format, va_list list, int count, convert_t spec[]);

/**
 * _printf - recode the function printf
 * @format: variable with string
 * Return: return the number of caracter print with the function
 */

int _printf(const char *format, ...)
{

	va_list list;
	int count = 0;

	convert_t spec[] = {
		{"c", _printc},
		{"s", _prints},
		{"%", _printm},
		{NULL, NULL}
	};
	va_start(list, format);
	count += _exec_print(format, list, count, spec);

	va_end(list);
	return (count);
}

/**
 * _exec_print - execute the code for return the result at the _printf function
 * @format: string for print and select the modulo
 * @list: contain argument
 * @count: variable for count the number of caracter print
 * @spec: structure for select the function
 * Return: return the value of count
 */

int _exec_print(const char *format, va_list list, int count, convert_t spec[])
{
	int i = 0, j = 0;

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			j = 0;
			while (spec[j].check != NULL)
			{
				if (*(spec[j].check) == format[i + 1])
				{
					count += spec[j].f(list);
				}
				j++;
			}
			i += 2;
		}
		else
		{
			_putchar(format[i]);
			count++;
			i++;
		}
	}
	return (count);
}

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
	count += _exec_print();
}

/**
 *
 */

int _exec_print(va_list list, int i, int j, int count, struct convert_t)
{
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			while (spec[j].check != NULL)
			{
				if (*(spec[j].check) == format[i + 1])
				{
					count += _exec_print(list);
					count += spec[j].f(list);
					i += 2;
					j = 0;
				}
				j++;
			}
		}
		_putchar(format[i]);
		count++;
		i++;
	}
	va_end(list);
	return (count);
}

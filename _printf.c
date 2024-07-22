#include "main.h"

/**
 *
 *
 */

int _printf(const char *format, ...)
{

	va_list list;
	int i = 0;
	int j = 0;

	convert spec[] = {
		{"c", _printc},
		{"s", _prints},
		{NULL, NULL}
	};
	va_start(list, format)

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			while (spec[j].check != NULL)
			{
				if (*(spec[j].check) == (format[i] + 1))
				{
					spec[j].f(list);
				}
				j++;
			}
			_putchar(format[i]);
			i++;
		}
	}
}

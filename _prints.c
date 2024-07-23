#include "main.h"



int _prints(va_list list)
{
	char *p = va_arg(list, int);
	int i = 0;
	int count = 0;

	while (p != '\0')
	{
		_putchar(p[i]);
		i++;
		count++;
	}
	return (count);
}

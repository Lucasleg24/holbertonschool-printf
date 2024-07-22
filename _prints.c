#include "main.h"



void _prints(va_list list)
{
	char *p = va_arg(list, int);
	int i = 0;
	
	while (p != '\0')
	{
		_putchar(p[i]);
	}
}

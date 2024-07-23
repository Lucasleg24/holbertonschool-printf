#include "main.h"


int _printc(va_list list)
{
	int count = 0;

	{
	_putchar(va_arg(list, int));
	count++;
	}
	return (count);
}

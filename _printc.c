#include "main.h"

/**
 * _printc - Function which will prints characters.
 * @list: List of integers which will be used to browse the exercises
 * Return: It returns the number of characters used.
 */

int _printc(va_list list)
{

	if (list == NULL)
	{
		return (0);
	}
	_putchar(va_arg(list, int));

	return (1);
}

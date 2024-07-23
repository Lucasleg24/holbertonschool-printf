#include "main.h"

/**
 * _printm - print a modulo caracter
 * @list: list contain argument
 * Return: return count for total caracter print
 */

int _printm(va_list list)
{
	int count = 0;

	{
		_putchar('%');
		count++;
	}
	return (count);
}

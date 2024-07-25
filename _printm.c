#include "main.h"

/**
 * _printm - print modulo caracter
 * @list: argument for print caracter
 * Return: return number of caracter print, 1 or 0
 */

int _printm(__attribute__ ((unused)) va_list list)
{
	if (list == NULL)
	return (0);
	_putchar('%');
	return (1);
}

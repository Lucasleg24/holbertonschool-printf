#include "main.h"

/**
 * _prints - Function which will print a string of characters
 * @list: List of integers which will be used to browse the exercises
 * Return: Counts the number of characters typed.
 */

int _prints(va_list list)
{
	char *p = va_arg(list, char*);
	int i = 0;
	int count = 0;

	while (p[i] != '\0')
	{
		_putchar(p[i]);
		i++;
		count++;
	}
	return (count);
}

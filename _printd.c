#include "main.h"

/**
 * _printd - Function which will print integers.
 * @list: List of integers which will be used in the exercises.
 * Return: The number of characters displayed on screen.
 */

int _printd(va_list list)
{
	int count = 0;
	int i;
	const char *arg;
	int d = 1;
	int result = 1;
	int c;

	arg = va_arg(list, const char *);
	
			for (; *arg != '\0'; arg++)
			{
			}
	i = atoi(arg);
	result = i;
	if (result < 0)
	result = -result;

	while (result / d >= 10)
	{
		d *= 10;
	}
	while (d > 0)
	{
	c = result / d;
	_putchar('0' + c);
	result %= d;
	d /=10;
	}
	count++;
	return (count);
}

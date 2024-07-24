#include "main.h"

/**
 * _printi - Function which will be used to print a string of integers
 * @list: List of integers which will be used in the exercise.
 * Return: The number of characters returned via count.
 */

int _printi(va_list list)
{
	int count = 0;
	int i = 0;
	int n;
	int result = 0;

	i = atoi(list);

	for (n = 0; va_arg[n] != '\0'; n++)
	{
	}
	while (n != 0)
	{
		result = i / 10;
		_printi(cal - 1);
	}
	result % 10;
	if (result < 0)
		result = -result;
	_putchar(result);
	count++;
	return (count);
}

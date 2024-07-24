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
	int cal;
	int result;

	i = atoi(list);

	for (cal = 0; va_arg[cal] != '\0'; cal++)
	{
	}
		while (cal != '\0')
		{
			result = i / 10;
			_printd(cal - 1);
		}
		result % 10;
		if (result < 0)
			result = -result;
		_putchar(result);
		count++;
		return (count);
}

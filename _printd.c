#include "main.h"
#include <limits.h>

/**
 * Divide - Function used to divide each numbers of a string
 * @result: Result is used to get the modulo of arg after the division
 * @count: Count is used to count the number of characters
 * Return: 0 or Result
 */

int Divide(int result, int count)
{
	count = 0;
	if (result / 10 == 0)
	{
		_putchar(result % 10 + '0');
		count++;
		return (count);
	}

	if (result / 10 != 0)
	{
		count += Divide(result / 10, count);
		_putchar(result % 10 + '0');
		count++;
	}

	return (count);
}

/**
 * _printd - Function which will print integers.
 * @list: List of integers which will be used in the exercises.
 * Return: The number of characters displayed on screen.
 */

int _printd(va_list list)
{
	int count = 0;
	int result = va_arg(list, int);

	if (result == INT_MIN)
	{
		_putchar('-');
		count++;
		result = result / 10;
		result = -result;
		count += Divide(result, count);
		_putchar('8');
		count++;
		return (count);
	}

	if (result < 0 && result != INT_MIN)
	{
		_putchar('-');
		result = -result;
		count++;
		count += Divide(result, count);
	}
	else
	{
		count += Divide(result, count);
	}

	return (count);
}

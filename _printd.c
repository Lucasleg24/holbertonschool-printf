#include "main.h"

/**
 * Divide - Function used to divide each numbers of a string
 * @result: Result is used to get the modulo of arg after the division
 * @count: Count is used to count the number of characters
 * Return: 0 or Result
 */

int Divide(int result, int count)
{
	va_list list;

	arg = va_arg(list, const char *);

	if (arg / 10 == 0)
	{
		return (0);
	}
	arg = arg / 10;
	divide(arg);

	result = arg % 10;
	return (result);
	count++;
}

/**
 * _printd - Function which will print integers.
 * @list: List of integers which will be used in the exercises.
 * Return: The number of characters displayed on screen.
 */

int _printd(va_list list)
{
	Divide(int result, int count);
	count++;
	return (count);
}

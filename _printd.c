#include "main.h"

/**
 * Divide - Function used to divide each numbers of a string
 * @result: Result is used to get the modulo of arg after the division
 * @count: Count is used to count the number of characters
 * Return: 0 or Result
 */

int Divide(int result, int count, va_list list)
{
	const char *arg;

	arg = va_arg(list, const char *);

	if (*arg == '\0')
		return (0);
	if (*arg / 10 == 0)
		return (0);
	result = *arg % 10;
	count++;
	return (Divide(result, count, list));
}

/**
 * _printd - Function which will print integers.
 * @list: List of integers which will be used in the exercises.
 * Return: The number of characters displayed on screen.
 */

int _printd(va_list list)
{
	int count = 0;
	int result = 0;

	result = Divide(result, count, list);

	return (count);
}

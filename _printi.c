#include "main.h"

/**
 * _printi - Function which will be used to print a string of integers
 * @list: List of integers which will be used in the exercise.
 * Return: The integer i in the string list
 */

int _printi(va_list list)
{
	int count = 0;
	int i = 0;
	int n = 0;

	if (list < 0)
		list = -list;
	if (list = n)
		list[i] = '-';
	while (list > 0)
	{
		list[i] = (list % 10) + '0';
		list /= 10;
		count++;
	}
	return (list[i]);
}

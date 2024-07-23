#include "main.h"

/**
 * _putchar - It is a function which will print a character.
 * @c: The chosen character.
 * Return: it will return the number of character
 *  to its adress.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include "main.h"

/**
 * _isdigit - checks if the value is a digit or not
 *
 * @c: parameter to be assessed
 * Return: 1 if true and 0 if false.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

#include "main.h"


/**
 * _isupper - Checks if the character is uppercase
 * @c: parameter to be tested
 * Return: 1 if it is lowercase else returns 0
 */

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}



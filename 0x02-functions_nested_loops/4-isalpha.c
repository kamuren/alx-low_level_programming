#include "main.h"


/**
 * _isalpha - Checks if the character is alphabetic character
 * @c: parameter to be tested
 * Return: 1 if it is lowercase else returns 0
 */

int _isalpha(int c)
{

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}



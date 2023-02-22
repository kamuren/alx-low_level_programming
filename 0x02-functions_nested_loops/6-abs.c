#include "main.h"

/**
 * _abs - this function computes absolute value of an integer
 *
 * @v: parameter to be tested
 *
 *Return: absolute value
 */

int _abs(int v)
{
	if (v < 0)
		return (0 - v);
	else
		return (v);
}

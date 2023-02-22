#include "main.h"

/**
 * print_last_digit - prints the last digit and returns the last digit
 *
 * @x: parameter to obtain last digit
 *
 * Retun: last digit parameter
 */

int print_last_digit(int x)
{
	int digit = x % 10;

	if (digit < 0)
	{
		_putchar(-digit + 0);
		return (-digit);
	}
	else
	{
		_putchar(digit + 0);
		return (digit);
	}
}

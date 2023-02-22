#include "main.h"

/**
 * print_sign - it prints the sign of a number if +ve or -ve
 *
 *@n: the number to be tested
 *
 *Return: 1 if +v, 0 if 0 and - if < 0
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}

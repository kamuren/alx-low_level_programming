#include "main.h"

int print_last_digit(int x)
{
	int digit = x % 10;

	_putchar(digit + '0');
	return (digit);
}

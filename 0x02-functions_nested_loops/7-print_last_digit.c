#include "main.h"

int print_last_digit(int x)
{
	int digit = x % 10;

	_putchar(digit);
	return (digit);
}

#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9.
 * Return: null
 */

void print_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		_putchar(i + 48);
		i++;
	}

	_putchar(10);
}

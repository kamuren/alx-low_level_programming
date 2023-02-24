#include "main.h"

/**
 * print_line - prints line
 * @n: shows number of times '_' should be be printed
 * Return: void
 */

void print_line(int n)
{
	int c;

	if (n <= 0)
		_putchar('\n');

	c = 0;
	while (c < n)
	{
		_putchar('_');
		c++;
	}
	_putchar('\n');
}

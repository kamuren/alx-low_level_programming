#include "main.h"

/**
 * print_most_numbers - print 0 to 9 with exception of 2 and 4
 * Return: no return
 */

int print_most_numbers(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		if (num == 2 || num == 4)
			continue;
		else
			_putchar(num + 48);
		num++;
	}
}

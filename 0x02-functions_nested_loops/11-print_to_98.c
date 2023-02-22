#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Print value of n to 98
 *
 * @n: - value to begin from
 *
 * Return: nothing to return
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i < 98)
			{
				putchar(i + '0');
				putchar(',');
				putchar(' ');
			}
			_putchar('\n');
		}
	}

	else if (n > 98)

	{
		for (i = n; i >= 98; i--)
		{
			if (i > 98)
			{
				putchar(i + '0');
				putchar(',');
				putchar(' ');
			}
			_putchar('\n');
		}
	}

	else
		putchar(n + '0');


}
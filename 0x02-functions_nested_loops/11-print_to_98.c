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
				printf("%d", i);
				putchar(',');
				putchar(' ');
				printf("98");
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
				printf("%d", i);
				putchar(',');
				putchar(' ');
				printf("98");
			}
			_putchar('\n');
		}
	}

	else
		printf("%d", n);


}

#include <stdio.h>

/**
 * print_to_98 - outputs number range and ends with 98
 * @n: - starting value
 *
 * Return: no return value
 *
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n < 98)
			{
				putchar(',');
				putchar(' ');

			}
			n++;
		}
		putchar('\n');

	}

	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n > 98)
			{
				putchar(',');
				putchar(' ');

			}
			n--;
		}
		putchar('\n');

	}

	else
		printf("%d\n", n);
}

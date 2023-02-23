#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 ten times
 * Return: null
 */

void more_numbers(void)
{
	int i;
	int num;

	i = 0;
	num = 0;
	while (i <= 10)
	{
		while (num <= 14)
		{
			_putchar(num + 48);
			num++;
		}

		i++;
		_putchar(10);
	}

}

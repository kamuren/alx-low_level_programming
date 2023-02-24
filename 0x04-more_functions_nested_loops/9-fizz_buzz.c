#include "main.h"

/**
 * fizz_buzz - prints fizz in mult of 3, buzz in those of 5 and 
 * fizzbuzz in cases where the both apply
 *
 * Return: no value
 */

void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			_putchar('Fizz');
			_putchar(' ');
		}
		else if (i % 5 == 0)
		{
			_putchar('Buzz');
			_putchar(' ');
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			_putchar('FizzBuzz');
			_putchar(' ');
		}
		else
		{
			_putchar(i + 48);
			_putchar(' ');
		}
	}
}



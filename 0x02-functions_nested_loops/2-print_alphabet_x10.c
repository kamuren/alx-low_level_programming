#include "main.h"

/**
 * print_alphabe_x10 - This prints out the alphabets
 * 10 times then adds a new line after it is done.
 *
 * Return: None
 */

void print_alphabet_x10(void)
{
	char letter = 'a';
	int i;

	
	i = 0;
	while (i <= 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);

			letter++;
		}

		_putchar('\n');
		i++;
	}
}

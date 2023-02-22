#include "main.h"

/**
 * print_alphabet_x10 - This prints out the alphabets 10
 * times then adds a new line after it is done.
 *
 * Return: None
 */

void print_alphabet_x10(void)
{
	char letter;
	int i = 0;

	while (i < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);

		_putchar('\n');
		i++;
	}
}

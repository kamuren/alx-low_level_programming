#include "main.h"

/**
 * print_alphabet
 * This prints out the alphabets,
 * then adds a new line after it is done.
 *
 * Return: None
 */

void print_alphabet(void)
{
	char letter = 'a';

	for (; letter <= 'z'; letter++)
	{
		_putchar(letter);

	}

	_putchar('\n');

}

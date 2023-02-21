#include "main.h"
/**
 * main -Entry point
 *
 * this functions prints out _putchar
 * followed by a new line.
 *
 * Return: Always 0. (Success)
 *
 */
int main(void)
{
	char output[9] = "_putchar\n";
	int i = 0;

	while (i < 9)
	{
		_putchar(output[i]);
		i++;
	}
	return (0);

}

#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always (0) Success
 */
int main(void)
{
	int num = 0;
	char letter = 'a';

	while (num <= 9)
	{
		putchar('0' + num);
		num++;
	}

	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}

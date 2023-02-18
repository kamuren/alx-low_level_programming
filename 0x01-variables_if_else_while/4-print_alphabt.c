#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always (0) Success
 */
int main(void)
{
	char al = 'a';

	while (al <= 'z')
	{
		if (al != 'e' && al != 'q')
		{
			putchar(al);
		}

		al++;
	}
	putchar('\n');
	return (0);
}

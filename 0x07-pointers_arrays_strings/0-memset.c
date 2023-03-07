#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to by
 * s with the constant byte b
 * @s: character array to fill
 * @b: constant byte to fill with
 * @n: how many times to fill
 * Return: the pointer to the char array
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;

	}

	return (s);

}

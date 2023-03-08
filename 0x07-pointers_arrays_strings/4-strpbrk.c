#include "main.h"

/**
 * _strpbrk -  function finds the first occurrence of the
 * substring needle in the string haystack
 * @s: The string to be searched.
 * @accept: The set of bytes to be searched for.
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{

	unsigned int i;
	unsigned int j;

	for (i = 0; s[i]; i++)
	{

		for (j = 0; accept[j]; j++)
		{

			if (s[i] == accept[j])
				break;

		}

		if (accept[j])
			return (s + i);

	}

	return (0);

}


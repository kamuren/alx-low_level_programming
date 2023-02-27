#include "main.h"

/**
 * _strlen - calculate the length of a string.
 *
 * @s: parameter for the string to be calculated.
 * Return: length of the string.
 */

int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}

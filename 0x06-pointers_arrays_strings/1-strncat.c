#include "main.h"
#include <string.h>

/**
 * *_strncat -  function that concatenates two strings.
 * @src: source
 * @dest: destination
 * @n: number parameter.
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = strlen(dest);
	int a = 0;

	while (a < n && a < *src)
	{
		dest[index + a] = *src;
		src++;
		a++;
	}
	dest[index + a] = '\0';
	return (dest);
}

#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: max
 */

int largest_number(int a, int b, int c)
{
	int max = a;

	if (b > max)
		max = b;
	if (c > max)
		max = c;

	return (max);
}

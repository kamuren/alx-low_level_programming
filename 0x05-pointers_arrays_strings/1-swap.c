#include "main.h"

/**
 * swap_int - swap the value of two integers.
 *
 * @a: first  pointer 
 * @b: second pointer
 *
 */

void swap_int(int *a, int *b)
{
	int c;

	c = 0;
	c = *a;
	*a = *b;
	*b = c;
}

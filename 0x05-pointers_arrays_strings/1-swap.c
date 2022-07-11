#include "main.h"

/**
 * swap_int - swap 2 variables a and b
 * @a: a pointer which will take value of b
 * @b: a pointer which will take value of a
 * @t: temporary variable
 */

void swap_int(int *a, int *b)
{
	int t;
	t = *a;
	*a =  *b;
	*b = t;
}

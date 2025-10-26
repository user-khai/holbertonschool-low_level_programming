#include "main.h"

/**
 * swap_int - swaps the value of two integer variables
 * @a: first integer
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	int *tmp;

	*tmp = *a;
	*a = *b;
	*b = *tmp;
}

#include "main.h"

/**
 * reverse_array - reverses an int array
 * @a: array
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
	int i = 0, tmp;

	n -= 1;
	while (i < n / 2)
	{
		tmp = a[i];
		a[i] = a[n - i];
	    a[n - i] = tmp;
		i++;
	}
}	

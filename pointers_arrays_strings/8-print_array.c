#include <stdio.h>
#include "main.h"

/**
 * print_array - prints first n elements from the array
 * @a: the array
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i != n - 1)
		{	
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d\n", a[i]);
		}
	}
}

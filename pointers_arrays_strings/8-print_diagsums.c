#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of an integer square
 * @a: the matrix array
 * @size: the length of the square matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0, j = size - 1, sum1 = 0, sum2 = 0;

	while(i < size)
	{
		sum1 += a[i][i];
		i++;
	}
	while (j >= 0)
	{
		sum2 += a[j][j];
		j--;
	}
	printf("%d, %d\n", sum1, sum2);
}

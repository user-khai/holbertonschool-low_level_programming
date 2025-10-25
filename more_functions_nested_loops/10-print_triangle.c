#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the base and height of the triangle
 * Description: printed using #
 */
void print_triangle(int size)
{
	int count = 0;
	int space = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (count < n)
		{
			while (space < n - count)
			{
				_putchar(' ');
				space++;
			}
			while (space < size)
			{
				_putchar('#');
				space++
			}
			count++;
			space = 0;
			_putchar('\n');
		}
	}
}

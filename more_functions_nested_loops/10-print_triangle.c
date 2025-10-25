#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the base and height of the triangle
 * Description: printed using #
 */
void print_triangle(int size)
{
	int count = 1;
	int space = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (count < size + 1)
		{
			while (space < size - count)
			{
				_putchar(' ');
				space++;
			}
			while (space < size + 1)
			{
				_putchar('#');
				space++;
			}
			count++;
			space = 0;
			_putchar('\n');
		}
	}
}

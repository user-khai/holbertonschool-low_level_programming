#include "main.h"

/**
 * print_square - prints a square
 * @size: the size of the square
 * Description: Prints a square using #
 */
void print_square(int size)
{
	int row = 0;
	int col = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (row < size)
		{
			while (col < size)
			{
				_putchar('#');
				col++;
			}
			row++;
			col = 0;
			_putchar('\n');
		}
	}
}

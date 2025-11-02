#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: chessboard array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int row = 0, col = 0;

	while (row < 8)
	{
		while (col < 8)
		{
			_putchar(a[row][col]);
			col++;

		}
		_putchar('\n');
		col = 0;
		row++;
	}
}

#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: the length of the line
 * Description: draws the line using blackslashes
 */
void print_diagonal(int n)
{
	int count = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (count < n)
		{
			if (count != n - 1)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('\');
			}
			count++;
		}
		_putchar('\n');
	}
}

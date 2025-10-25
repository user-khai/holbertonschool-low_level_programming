#include "main.h"

/**
 * print_line - draws a straight line
 * @n: how long the line should be
 * Description: prints n number of underscores
 */
void print_line(int n)
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
			_putchar('_');
			count++;
		}
		_putchar('\n');
	}
}


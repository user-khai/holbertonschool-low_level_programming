#include "main.h"

/**
 * times_table - print up until x9 times table
 */
void times_table(void)
{
	int a = 0;
	int b = 0;
	int c;

	while (a < 10)
	{
		if (b > 9)
		{
			b = 0;
		}
		while (b < 10)
		{
			c = a * b;

			if (b == 0)
			{
				_putchar(c + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');

				if (c < 10)
				{
					_putchar(' ');
				}
				else
				{
					_putchar((c / 10) + '0');
				}
				_putchar((c % 10) + '0');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}

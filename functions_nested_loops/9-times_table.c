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
			if (b > 0 && b < 10)
			{
				_putchar(' ');
				_putchar(c + '0');
			}
			else
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}

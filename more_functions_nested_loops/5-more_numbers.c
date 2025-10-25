#include "main.h"

/**
 * more_numbers - prints 0-14 ten times
 * Description: prints each range on its own line
 */
void more_numbers(void)
{
	int i = 0;
	int j = 0;

	while (i < 10)
	{
		while (j < 15)
		{
			if (j > 9)
			{
				_putchar((j / 14) + '0');
			}
			_putchar((j % 14) + '0');
			j++;
		}
		_putchar('\n');
		i++;
		j = 0;
	}
}

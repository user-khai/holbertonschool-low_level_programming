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
			_putchar(j + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}

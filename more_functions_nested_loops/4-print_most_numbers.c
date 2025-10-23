#include "main.h"

/**
 * print_most_numbers - prints 0-9, excluding 2 and 4
 * Descripton: prints each number and a newline at the end
 */
void print_most_numbers(void)
{
	int n = 48;

	while (n < 58)
	{
		if (n != 50 && n != 52)
		{
			_putchar(n);
		}
		n++;
	}
	_putchar('\n');
}

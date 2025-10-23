#include "main.h"

/**
 * print_numbers - prints 0-9
 * Descripton: prints each number and a newline at the end
 */
void print_numbers(void)
{
	int n = 0;
	while (n < 10)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		last_digit = (n % 10) * -1;
		_putchar(last_digit);
		return (last_digit);
	}
	last_digit = n % 10;
	_putchar(last_digit);
	return (last_digit);
}

#include "main.h"

/**
 * print_alphabet - prints the alphabet to stdout
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
}

/**
 * main - entry point
 * Description: calls the print_alphabet function
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	_putchar('\n');
	return (0);
}

#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: the string to be printed in reverse
 * Description: Prints string argument in reverse, followed by a newline
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0' && s)
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}

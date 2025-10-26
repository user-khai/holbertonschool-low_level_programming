#include "main.h"

/**
 * _puts - prints string
 * @str: the string to be printed
 * Description: prints argument followed by newline to stdout
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0' && str)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

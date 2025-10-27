#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the string
 * Description: starts from the first character and prints a newline at the end
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0' && str)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}

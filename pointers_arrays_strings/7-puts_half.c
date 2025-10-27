#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: the string
 * Description: prints newline at then end of output
 */
void puts_half(char *str)
{
	int n;
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
	{
		n = i / 2;
	}
	else
	{
		n = (i + 1) / 2;
	}

	while (n <= i)
	{
		_putchar(str[n]);
		n++;
	}
}

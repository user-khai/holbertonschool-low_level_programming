#include <stdio.h>

/**
 * main - entry point
 * Description: prints integers 0-9
 * Return: always 0 (success)
 */
int main(void)
{
	int n = 48;

	while (n < 58)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}

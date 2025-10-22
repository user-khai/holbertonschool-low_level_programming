#include <stdio.h>

/**
 * main - entry point
 * Description: prints base 16 number range 0-f
 * Return: always 0 (success)
 */
int main(void)
{
	int n = 48;

	while (n < 103)
	{
		if (!(n >= 58 && n <= 96))
		{
			putchar(n);
		}
		n++;
	}
	putchar('\n');
	return (0);
}

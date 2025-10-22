#include <stdio.h>

/**
 * main - entry point
 * description: prints integers 0-9
 * return: always 0 (success)
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	putchar('\n');
	return (0);
}

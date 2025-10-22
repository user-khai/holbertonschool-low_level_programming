#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the alphabet in both lower and uppercase respectively
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';
	char ch = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}

#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string
 * Return: length of *s
 */
int _strlen(char *s)
{
	int len = 0;
	char i;

	while (i != '\0' || *s != "")
	{
		len++;
		i = s[len];
	}
	return (len);
}

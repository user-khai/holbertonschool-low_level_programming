#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character to be located
 * Return: s if c is found or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (s[0] != '\0')
	{
		if (s[0] == c)
		{
			return (s);
		}
		s++;
	}
	return (s);
}

#include "main.h"

/**
 * _strpbrk - locates the first occurrence of any bytes of accept in s
 * @s: char pointer to string
 * @accept: char pointer to string
 * Return: pointer to the first instance in s that matches a char in accept
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		while (accept[count] != '\0')
		{
			if (*s == accept[count])
			{
				return (s);
			}
			count++;
		}
		count = 0;
		s++;
	}
	return (0);
}

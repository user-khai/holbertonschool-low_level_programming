#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: char pointer to string
 * @accept: char pointer to string
 * Return: number of bytes in s found in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;

	while (*s != '\0')
	{
		found = 0;
		char *a_ptr = accept;

		while (*a_ptr != '\0')
		{
			if (*s == *a_ptr)
			{
				found = 1;
				break;
			}
			a_ptr++;
		}
		if (found)
		{
			count++;
			s++;
		}
		else
		{
			break;
		}
	}
	return (count);
}

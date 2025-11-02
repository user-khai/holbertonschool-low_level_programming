#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: char pointer
 * @needle: char pointer to substring
 * Return: pointer to the beginning of the located substring in haystack
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*h != '\0' && *n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}

		haystack++;
	}
	return (0);
}

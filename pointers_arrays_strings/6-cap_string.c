#include "main.h"

/**
 * cap_string - capitalise all words
 * @s: string
 * Return: transformed string
 */
char *cap_string(char *s)
{
	int i = 0, j = 0;
	char separator[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	while (s[i] != '\0')
	{
		while (separator[j] != '\0')
		{
			if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
			else if (s[i] == separator[j] && s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] = s[i + 1] - 32;
			}
			j++;
		}
		i++
	}
	return (s);
}

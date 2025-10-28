#include "main.h"

/**
 * leet - Encodes string into 1337
 * @s: string
 * Return: transformed string
 */
char *leet(char *s)
{
	char letter[11] = "aAeEoOtTlL";
	char num[6] = "43071";
	int i = 0, j = 0;

	while (s[i] != '\0')
	{
		while (letter[j] != '\0')
		{
			if (s[i] == letter[j])
			{
				s[i] = num[j / 2];
			}
			j++;
		}
		i++;
		j = 0;
	}
	return (s);
}


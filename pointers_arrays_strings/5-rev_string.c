#include "main.h"

/**
 * rev_string - reverses the string
 * @s: the string to be reversed
 * Description: Reverses string argument
 */
void rev_string(char *s)
{
	int i = 0, len;
	char tmp;

	while (s[i] != '\0' && s)
	{
		i++;
	}
	i--;
	len = i;
	while (i >= (len / 2) + 1)
	{
		tmp = s[i];
		s[i] = s[len - i];
		s[len - i] = tmp;

		i--;
	}
}

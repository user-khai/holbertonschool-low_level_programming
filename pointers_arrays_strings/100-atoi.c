#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: the string to be converted
 * Return: converted string in the form of int
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, res = 0, digit = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (digit == 1)
		{
			break;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i] >= '0' && s[i] <= '9')
			{	
				digit = 1;
				res = res * 10 + (s[i] - '0');
				i++;
			}
		}
		i++;
	}
	return (sign * res);
}

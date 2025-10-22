#include "main.h"

/**
 * _isalpha - checks for alphabet character
 * @c: the character to check
 * Return: On success 1.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}

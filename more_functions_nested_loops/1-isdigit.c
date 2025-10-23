#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: the character to be checked
 * Description: returns 1 if digit and 0 otherwise
 * Return: 1 if true, 0 if false
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: the number to be checked
 * Description: returns 1 if uppercase and 0 otherwise
 * Return: 1 if true, 0 if false
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}

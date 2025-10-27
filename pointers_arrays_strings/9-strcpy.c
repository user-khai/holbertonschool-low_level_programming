#include "main.h"

/**
 * _strcpy - copies string to buffer
 * @dest: pointer to the buffer
 * @src: pointer to the string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

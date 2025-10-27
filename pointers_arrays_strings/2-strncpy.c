#include "main.h"

/**
 * _strncpy - copies n bytes from src to dest
 * @dest: string to be concatenated to
 * @src: string
 * @n: number of bytes to use from src
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n && src)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

#include "main.h"

/**
 * _strcat - concatenates n bytes from first string to second string
 * @dest: string to be concatenated to
 * @src: string
 * @n: number of bytes to use from src
 * Description: concatenates n bytes from src to dest
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

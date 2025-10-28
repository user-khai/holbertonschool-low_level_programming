#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies n bytes from src to dest
 * @dest: pointer to memory area
 * @bsrc: pointer to memory area to be copied
 * @n: number of bytes to copy
 * Return: transformed dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

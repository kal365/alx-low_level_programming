#include "main.h"
/**
 * _memcpy- copies memory area
 * @dest: your name (you@domain.com)
 * @src: a source string to be copied
 * @n: nuber of bytes to return
 * Return:a copied pointer string
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

#include "main.h"
/**
 * _strcat - Concating string
 * @dest: a pointer variable to char
 * @src: a pointer variable to char
 * Return: a string pointer
 */
char *_strcat(char *dest, char *src)
{
	int i, j = 0;

	while (*dest++ != '\0')
	       i++;
	for (j = 0; *src++; j++)
		dest[i++] = src[j];

	return (dest);
}

#include "main.h"
/**
 * _strlen - To return thr length of string
 * @s: pointer char
 * Return: integer
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s++ != '\0')
	{
		count++;
	}
	return (count);
}

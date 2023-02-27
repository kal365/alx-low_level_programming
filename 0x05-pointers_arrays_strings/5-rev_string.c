#include "main.h"
/**
 * rev_string - To reverse input string
 * @s: pointer variable
 * Return: void
 */
void rev_string(char *s)
{
	int i, j;

	char str[500];

	i = 0;

	while (*(s + i))
	{
		*(str + i) = *(s + i);
		i++;
	}
	i = i - 1;
	j = 0;
	while (i >= 0)
	{
		*(s + i) = *(str + j);
		j++;
		i--;
	}
}

#include "main.h"
/**
 * _strlen_recursion - Printing the length of the strings
 * @s: a char pointer
 * Return: void
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}

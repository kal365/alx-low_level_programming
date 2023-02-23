#include "main.h"
/**
 * _isupper - to check a letter
 * @c: letter
 * Return: On success 1 and 0 for failure
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}

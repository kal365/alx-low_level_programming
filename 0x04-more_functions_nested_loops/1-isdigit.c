#include "main.h"
/**
 * _isdigit - Check number through 0 - 9
 * @c: integer
 * Return: On success 1 otherwise 0
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}

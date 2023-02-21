#include "main.h"
/**
 * _islower - Check the alphabet
 *
 * Return: On success 1 otherwise 0
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

#include "main.h"
/**
 * _abs - Compute the value to absolute value
 *
 * Return: Always 0
 */
int _abs(int num)
{
	int value;

	if (num < 0)
	{
		value = -1 * num;
		return (value);
	}
	if (num == 0)
	{
		return (num);
	}
	if (num > 0)
	{
		return (num);
	}

	return (0);
}

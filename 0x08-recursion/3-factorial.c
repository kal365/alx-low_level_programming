#include "main.h"
/**
 * factorial - Return the factorial squence
 * @n: an integer
 * Return: integer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}

#include "main.h"
/**
 * swap_int - To swap value of integer
 * @a: pointer var
 * @b: pointer var
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

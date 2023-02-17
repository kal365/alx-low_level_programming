#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char start;

	for (start = 'z'; start >= 'a'; start--)
	{
		putchar(start);
	}
	putchar('\n');
	return (0);
}

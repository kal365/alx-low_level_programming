#include <stdio.h>
int main(void)
{
	int i, j, sum;

	i = 1;

	j = 1;

	for (i = 2; i < 100; i++)
	{
		if (i != 49)
			printf("%i, ", sum);
		i = j;
		j = sum;
		sum = i + j;
	}
	printf("\n");
	return (0);
}

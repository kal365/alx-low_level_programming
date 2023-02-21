#include"main.h" 
/** 
 * main -entry point 
 * description: prints the first 50fibonnaci 
 * Return: always 0 
 */ 
int main(void)
{
	int n, fib1, fib2, sum;

	fib1 = 0;

	fib2 = 1;

	for (n = 0; n < 50; ++n)
	{
		sum = fib1 + fib2;
	
		printf("%i", sum);
		fib1 = fib2;
		fib2 = sum;
	
		if (n == 49)
			printf("\n");
		else
			printf(",");
	}
	return (0);
}

#include <stdio.h>
int main(void)
{
	char *s = "My first strlen";
	printf("This is the value of s: %c\n", *s);
	printf("This is the address of s: %p\n", &s);
	//copying the string
	char *ptr = s;
	s = s + 1;
	printf("Tried to access the seccond letter: %c\n", *s);
	printf("The second address of the char: %p \n", &s);
	printf("The whole value is : %s\n", s);

	
	printf("The ptr var is: %s\n", ptr); 
	//
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
  * main - Prints out fizz buzz number
  *
  * printf
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3) == 0)
			printf("fizz ");
		if ((n % 5) == 0)
			printf("buzz");
		else if (((n % 3) == 0) && ((n % 5) == 0))
			printf("fizzbuzz");
		else
			printf("%d", n);
		printf(" ");
	}
	printf("\n");
	return (0);
}

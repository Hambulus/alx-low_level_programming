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
		{
			printf("Fizz");
			printf(" ");
		}
		if ((n % 5) == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		if (((n % 3) == 0) && ((n % 5) == 0))
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else
		{
			printf("%d", n);
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}

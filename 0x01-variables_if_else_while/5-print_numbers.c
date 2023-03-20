#include <stdio.h>

/**
  * main - Entry point
  *
  * prints - print output from a variable
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int numbs;

	while (numbs < 10)
	{
		printf("%d", numbs);
		numbs++;
	}
	printf("\n");
	return (0);
}

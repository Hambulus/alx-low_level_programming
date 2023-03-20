#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point
  *
  * putchar - print out from a variable
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int numbz = '0';

	while (numbz <= '9')
	{
		putchar(numbz);
		numbz++;
	}
	putchar('\n');
	return (0);
}

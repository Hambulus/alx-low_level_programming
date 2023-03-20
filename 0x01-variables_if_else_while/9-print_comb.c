#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point
  *
  * putchar - Prints output from a variable
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		if (i < '9')
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}

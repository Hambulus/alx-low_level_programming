#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point
  *
  * putchar - Outputs texts stored in a variable
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char alphbt = 'a';

	while (alphbt <= 'z')
	{
		if (alphbt != 'q' && alphbt !='e')
		putchar(alphbt);
		alphbt++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point
  *
  * putchar - prints output from a variable
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int hexnum = '0';

	while (hexnum <= '9')
	{
		putchar(hexnum);
		hexnum++;
	}
	putchar('\n');
	return (0);
}

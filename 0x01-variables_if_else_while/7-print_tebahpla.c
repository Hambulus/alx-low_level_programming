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
	char alph = 'z';

	while (alph >= 'a')
	{
		putchar(alph);
		alph--;
	}
	putchar('\n');
	return (0);
}

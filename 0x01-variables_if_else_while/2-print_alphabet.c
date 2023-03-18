#include <stdio.h>

/**
  * main - Entry point
  *
  * putchar - Prints output stored in variable
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}

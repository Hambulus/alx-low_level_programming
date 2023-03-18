#include <stdio.h>

/**
  * main - Entry point
  *
  * putchar - outputs text from a variable
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char s = 'a';
	char b = 'A';

	while (s <= 'z')
	{
		putchar(s);
		s++;
	}
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}

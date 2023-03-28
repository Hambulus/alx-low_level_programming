#include "main.h"

/**
  * print_alphabet_x10 - Entry point
  *
  * _putchar - print out character
  *
  * Return: Always 0 (Success)
  */
void print_alphabet_x10(void)
{
	char alpha = 'a';
	int n = 0;

	for (n = 1; n <= 10; n++)
	{
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
	}
	_putchar('\n');
}

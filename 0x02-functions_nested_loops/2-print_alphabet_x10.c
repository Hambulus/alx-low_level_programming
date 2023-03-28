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

	while (n <= 9)
	{
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		n++;
	}
	_putchar('\n');
}

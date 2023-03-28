#include "main.h"

/**
  * main - Entry point
  *
  * _putchar - prints a character
  *
  * Return: Always 0 (Success)
  */
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}

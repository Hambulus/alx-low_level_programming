#include "main.h"

/**
  * print_most_numbers - prints out some numbers
  *
  * _putchar - outputs characters from a function
  *
  * Return: Always 0 (Success)
  */
void print_most_numbers(void)
{
	char c;

	for (c = 0; c <= 9; c++)
	{
		if (c != 2 && c != 4)
			_putchar('0' + c);
	}
	_putchar('\n');
}

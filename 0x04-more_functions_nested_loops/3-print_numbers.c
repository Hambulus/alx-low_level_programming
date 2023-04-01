#include "main.h"

/**
  * print_numbers - outputs numbers
  *
  * _putchar - prints characters from a function
  *
  * Return: Always 0 (Success)
  */
void print_numbers(void)
{
	char c = 0;

	for (c = 0; c <= 9; c++)
		_putchar(c);
	_putchar('\n');
}

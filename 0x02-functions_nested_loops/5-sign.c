#include "main.h"

/**
  * print_sign - Prints a sign
  *
  * @n: Parameter for function
  *
  * _putchar - Outputs a character
  *
  * Return: Always  0 (Success)
  */
int print_sign(int n)
{
	int a = 0;

	if (n > a)
	{
		_putchar('+');
		return (1);
	}
	if (n == a)
	{
		_putchar('0');
		return (0);
	}
	if (n < a)
	{
		_putchar('-');
		return (1);
	}
	return (0);
}

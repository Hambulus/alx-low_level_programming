#include "main.h"

/**
  * print_last_digit - Prints last digit
  *
  * @c: Parameter to the function
  *
  * Return: Always 0 (Success)
  */
int print_last_digit(int c)
{
	int num = c % 10;

	if (c < 0)
		num = num * -1;
	_putchar(num + '0');
	return (1);
}

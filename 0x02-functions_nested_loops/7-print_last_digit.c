#include <stdio.h>
#include "main.h"

/**
  * print_last_digit - Prints last digit
  *
  * @c: Parameter to the function
  *
  * printf - prints out a character
  *
  * Return: Always 0 (Success)
  */
int print_last_digit(int c)
{
	if (c > 0)
		c = c % 10;
	return (c);
	if (c == 0)
		c = c % 10;
	return (c);
	if (c < 0)
		c = c % 10;
	return (c);
}

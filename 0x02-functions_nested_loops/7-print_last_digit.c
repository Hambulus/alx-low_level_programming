#include "main.h"
#include <stdio.h>

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
	int num;

	num = 48;
	c = num % 10;
	printf("%d%d\n", c, c);
	return (0);
}

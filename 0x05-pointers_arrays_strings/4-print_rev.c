#include "main.h"

/**
  * print_rev - prints a string in reverse
  *
  * @s: parameter to the function
  *
  * _putchar - prints output from function
  *
  * Return: Always 0 (Success)
  */
void print_rev(char *s)
{
	int r = 0;

	while (s[r])
		r++;
	while (r--)
		_putchar(s[r]);
	_putchar('\n');
}

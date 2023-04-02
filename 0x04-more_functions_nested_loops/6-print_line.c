#include "main.h"

/**
  * print_line - prints a line on terminal
  *
  * _putchar - outputs character from function
  *
  * Return: Always 0 (Success)
  */
void print_line(int n)
{
	int l = 0;

	while (l < n && n > 0)
	{
		_putchar('_');
		l++;
	}
	_putchar('\n');
}

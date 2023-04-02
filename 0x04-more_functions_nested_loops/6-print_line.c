#include "main.h"

/**
  * print_line - prints a line on terminal
  *
  * _putchar _outputs a character from a function
  *
  * Return: Always 0 (Success)
  */
void print_line(int n)
{
	int l = 0;

	for (l = 0; l <= n; l++)
	{
		if (n > 0)
			_putchar('_');
		else
			_putchar('\n');
	}
}

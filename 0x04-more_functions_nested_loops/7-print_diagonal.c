#include "main.h"

/**
  * print_diagonal - Prints a diagonal line
  *
  * @n - parameter of the function
  *
  * _putchar - ouptputs a character to the terminal
  *
  * Return: Always 0 (Success)
  */
void print_diagonal(int n)
{
	int d, l;

	if (n > 0)
	{
		for (d = 0; d < n; d++)
		{
			for (l = 0; l < n; l++)
			{
				if (l == d)
					_putchar('\\');
				else if (l < d)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

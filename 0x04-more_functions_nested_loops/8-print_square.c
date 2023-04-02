#include "main.h"

/**
  * print_square - prints out a square
  *
  * @size: Parameter to the function
  *
  * Return: Always 0 (Success)
  */
void print_square(int size)
{
	int l, d;

	if (size > 0)
	{
		for (l = 0; l < size; l++)
		{
			for (d = 0; d < size; d++)
			{
				if (size > 0)
					_putchar('#');
				else
					_putchar('\n');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

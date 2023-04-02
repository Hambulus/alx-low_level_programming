#include "main.h"

/**
  * more_numbers - prints out numbers many times
  *
  * _putchar - outputs character from a function
  *
  * Return: Always 0 (Success)
  */
void more_numbers(void)
{
	char c;
	char j;

	while (j <= 9)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
				_putchar((c / 10) + 48);
			_putchar((c % 10) + 48);
		}
		_putchar('\n');
		j++;
	}
}

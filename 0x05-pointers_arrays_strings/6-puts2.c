#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * puts2 - Function prints characters
  *
  * @str: Parameter to the function
  *
  * Return: Always 0 (Success)
  */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] % 2) == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}

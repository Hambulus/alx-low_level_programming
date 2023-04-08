#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * rev_string - Function reverses a string
  *
  * @s: Parameter to the function
  *
  * Return: Always 0 (Success)
  */
void rev_string(char *s)
{
	int i = 0;

	if (i >= 0)
	{
		for (i = 9; i >= 0; i--)
			_putchar(s[i]);
		_putchar('\n');
	}
	else
		_putchar('\n');
}

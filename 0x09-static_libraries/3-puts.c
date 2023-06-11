#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * _puts - Outputs text stored in parameter
  *
  * _putchar - Prints character from function
  *
  * @str: Parameter to the function
  *
  * Return: Always 0 (Success)
  */
void _puts(char *str)
{
	int j = 0;

	while (str[j])
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}

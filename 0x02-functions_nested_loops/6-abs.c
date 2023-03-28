#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
  * _abs - Prints absolute values
  *
  * @c: Parameter to the function
  *
  * printf - prints output from variables
  *
  * Return: Always 0 (Success)
  */
int _abs(int c)
{
	int num;

	num = -5;
	c = _abs(num);
	printf("%d\n", c);
	return (0);
}

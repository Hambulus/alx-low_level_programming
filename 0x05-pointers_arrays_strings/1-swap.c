#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * swap_int - function swaps the output of two variables
  *
  * @a: Parameter to the function
  *
  * @b: Parameter to the function
  *
  * _putchar - outputs characters from a function
  *
  * Return: Always 0 (Success)
  */
void swap_int(int *a, int *b)
{
	int old;

	old = *a;
	*a = *b;
	*b = old;
}

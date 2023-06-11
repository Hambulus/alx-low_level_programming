#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
  * _strlen - outputs the length of a string
  *
  * @s: Parameter to the function
  *
  * Return: Always 0 (0)
  */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

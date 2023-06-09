#include <stdio.h>
#include "main.h"

/**
 * *_print_rev_recursion - prints out a string in reverse
 * @s: Parameter to the variable
 * Return: Always 0 
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);;
}

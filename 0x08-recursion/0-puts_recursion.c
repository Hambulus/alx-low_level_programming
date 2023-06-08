#include <stdio.h>
#include "main.h"

/**
 * *_puts_recursion - function that prints a sting
 * @s: Parameter to the function
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}

#include "main.h"

int print_sign(int n)
{
	int a = 0;

	if (n > a)
	{
		_putchar('+');
		return (1);
	}
	if (n == a)
	{
		_putchar('0');
		return (0);
	}
	if (n < a)
	{
		_putchar('-');
		return (1);
	}
	return (0);
}

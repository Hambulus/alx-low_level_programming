#include "main.h"

/**
 * main - Entry point
 *
 * _putchar - outputs a character
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char str[]  = "_putchar";
	int n = 0;

	while (str[n] != '\0')
	{
		char c = str[n];

		_putchar(c);
		n++;
	}
	_putchar('\n');
	return (0);
}

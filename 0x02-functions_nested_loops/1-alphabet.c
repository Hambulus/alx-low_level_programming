#include "main.h"

/**
  * main - Entry point
  *
  * _putchar - prints a character
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char str[] = 'a';
	int n = 0;

	while (str[n] <= 'z')
	{
		char c = str[n];

		_putchar(c);
		n++;
	}
	_putchar('\n');
	return (0);
}

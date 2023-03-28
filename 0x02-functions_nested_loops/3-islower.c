#include "main.h"

/**
  * _islower - Entry point
  *
  * _putchar - prints out a character
  *
  * Return: Always 0 (Success)
  */
int _islower(int c)
{
	int n = 'a';

	for (n = 'a'; n <= 'z'; n++)
	{
		if (c == n)
		return (1);
	}
	return (0);
}

#include "main.h"

/**
  * _isalpha - Entry point
  *
  * @c: Parameter of the function
  *
  * Return: Always 0 (Success)
  */
int _isalpha(int c)
{
	int n = 'a';
	int a = 'A';

	for (n = 'a'; n <= 'z'; n++)
	{
		if (c == n)
		return (1);
	}
	for (a = 'A'; a <= 'Z'; a++)
	{
		if (c == a)
		return (1);
	}
	return (0);
}

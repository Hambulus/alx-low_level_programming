#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - Entry point
  *
  * printf: Prints output of values stored in variable
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_digit = n % 10;
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	if (n < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
	return (0);
}

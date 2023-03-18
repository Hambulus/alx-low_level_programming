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
	int las_dig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	las_dig = n % 10;
	if (las_dig > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, las_dig);
	if (las_dig == 0)
		printf("Last digit of %d is %d and is 0\n", n, las_dig);
	if (las_dig < 6 && las_dig != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, las_dig);
	return (0);
}

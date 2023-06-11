#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: counts
 * @argv: lists
 * Return: Always 0
 */
int main(int argc, char const *argv[])
{
	int i;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
			sum += atoi(argv[i]);
		printf("%d\n", sum);
	}
	else if (argc == 1)
		printf("0\n");
	else
		printf("Error\n");
	return (0);
}

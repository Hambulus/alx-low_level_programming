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
	int j;
	int second;
	int first;
	int mul = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
			first = atoi(argv[1]);
		for (j = 1; j < argc; j++)
			second = atoi(argv[2]);
		mul = first * second;
		printf("%d\n", mul);
	}
	else
		printf("Error\n");
	return (0);
}

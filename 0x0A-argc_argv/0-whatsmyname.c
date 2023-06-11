#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - a function that prints its own name
 * @argc: counts the number os arguments
 * @argv: Show the index or position of ever argument
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

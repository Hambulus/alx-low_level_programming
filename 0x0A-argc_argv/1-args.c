#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: counts the number of arguments in a function
 * @argv: displays the name of the functions inputs
 * Return: Always 0
 */
int main(int argc, char const *argv[])
{
	argc = argc - 1;
	(void)argv;
	printf("%d\n", argc);
	return (0);
}

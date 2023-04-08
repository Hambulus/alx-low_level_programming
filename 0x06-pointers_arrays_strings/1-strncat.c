#include "main.h"

/**
 * _strncat - concatenates specified values from src to dest
 * @src: Second string to copy from
 * @dest: string to be overwritten
 * @n: number of values to concatenate
 * Description: Concatenates n mumber of values from src to dest
 * Return: string
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && n > j)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	if (n > 0)
		dest[i] = '\0';
	return (dest);
}

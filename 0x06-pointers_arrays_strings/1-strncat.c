#include "main.h"

/**
 * _strncat - concatenates two string
 * @dest: copy to
 * @src: copy from
 * @n: the variable
 * Return: the pointer dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != 0)
	{
		i++;
	}

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

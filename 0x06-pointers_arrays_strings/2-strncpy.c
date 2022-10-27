#include "main.h"

/**
 * _strncpy - to copy the string
 * @dest: the first parameter
 * @src: the second parameter
 * @n: the variable
 * Return: the pointer dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n; &&src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

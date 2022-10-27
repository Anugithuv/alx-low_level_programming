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

	for (i = 0; i < n; &&src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

#include "main.h"

/**
 * _strcat - to concatenates tow string
 * @dest: the first parameter
 * @src: the second parameter
 * Return: return a string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = o;
	while (dest(i) != '\0')
	{
		i++;
	}

	j = 0;
	while (src(j) != '\0')
	{
		dest(i) = src(j);
		i++;
		j++;
	}
	dest(i) = '\0';
	return (dest);
}

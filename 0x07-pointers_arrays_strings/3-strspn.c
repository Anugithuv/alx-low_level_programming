#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 * @s: the string
 * @accept: the prefix
 * Return: number of bytes in the initial segment of s
 *         which consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (s[i] != accept[j])
		{
			break;
		}
	}
	return (i);
}

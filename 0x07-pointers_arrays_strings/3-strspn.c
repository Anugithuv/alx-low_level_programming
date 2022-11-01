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
	unsigned int byte = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				byte++;
				break;
			}

			else if (accept[index + 1] == '\0')
				return (byte);
		}

		s++;
	}
	return (byte);
}

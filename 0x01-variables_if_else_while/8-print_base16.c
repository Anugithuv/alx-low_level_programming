#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: print all the numbers of base 16 in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;
	char e = 0;

	while (e <= 9)
	{
		putchar(e);
		e++;
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

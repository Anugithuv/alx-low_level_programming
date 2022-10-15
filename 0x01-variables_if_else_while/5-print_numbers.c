#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: print all single digit number of base 10 from 0
 * Return: Always 0 (success)
 */
int main(void)
{
	int f;

	for (f = 0; f < 10; f++)
	{
		putchar("%d", f);
	}
	putchar('\n');
	return (0);
}

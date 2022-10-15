#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: print the alphabet in lowercase expect q and e
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
		else
		{
		}
	}
	putchar('\n');
	return (0);
}

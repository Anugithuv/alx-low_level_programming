#include "main.h"
/**
 * print_diagonal - print a diagonal line
 * @n: the number
 */

void print_diagonal(int n)
{
	int j, i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (j = 0; j < n; j++)
		{
			for (i = 0; i < x; i++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}

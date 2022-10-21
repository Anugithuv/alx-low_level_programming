#include "main.h"
/**
 * print_line - draw a straight line
 * @n: the number
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	for (j = 0; j <= n; j++)
		_putchar('_');
	_putchar('\n');
}

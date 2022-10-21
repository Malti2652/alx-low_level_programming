#include "main.h"

/**
 * print_diagonal - draws a diagonal line 
 * @n: numbers of '\' to the printed 
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
		_putchar('\n');

	for (x = 0; x < n; x++)
	{
		for (y = 0; y < xx; y++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
}

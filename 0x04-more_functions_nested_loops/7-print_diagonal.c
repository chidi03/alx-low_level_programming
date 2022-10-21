#include "main.h"
/**
 * print_diagonal - draws a diagonal line with \ character.
 * @n: the number of times it will be printed.
 */
void print_diagonal(int n)
{
	int diag;

	if (n > 0)
	{
		for (diag = 0; diag < n; diag++)
			_putchar('_');
	}

	_putchar('\n');
}

#include "main.h"
/**
 * print_diagonal - draws a diagonal line with \ character.
 * @n: the number of times it will be printed.
 */
void print_diagonal(int n)
{
	int diag, space;

	if (n > 0)
	{
		for (diag = 0; diag < n; diag++)
		{
			for (space = 0; space < len; space++)
				_putchar(' ');
			_putchar('\\');

			if (diag == n - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}

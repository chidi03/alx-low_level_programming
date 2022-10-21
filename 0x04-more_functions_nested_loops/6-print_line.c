#include "main.h"
/**
 * print_line - prints a new line on the terminal.
 * @n: the number _ characters to be printed.
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}

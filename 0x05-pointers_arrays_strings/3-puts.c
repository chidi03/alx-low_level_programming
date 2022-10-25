#include "main.h"
/**
 * _puts - prints a string the stdout
 * @str: the string is to printed
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}

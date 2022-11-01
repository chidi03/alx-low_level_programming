#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area.
 * @s: a pointer to the memory area to be filled.
 * @b: constant byte.
 * @n: the number of bytes to be filled.
 * Return: a pointer to the filled memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	unsigned char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}

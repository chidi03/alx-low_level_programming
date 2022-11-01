#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area.
 * @s: a pointer to the memory area to be filled.
 * @c: constant byte.
 * @n: the number of bytes to be filled.
 * Return: a pointer to the filled memory area @s.
 */
void *_memset(void *s, int c, unsigned int n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}

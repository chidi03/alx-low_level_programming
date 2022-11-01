#include "main.h"
/**
 * _memcpy - copies @n bytes form the memory
 * @dest: a pointer to the memory area to copy @src
 * @src: the source buffer to copy chars from.
 * @n: the number of bytes to copy from @src.
 * Return: a pointer to the destination buffer @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for  (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}

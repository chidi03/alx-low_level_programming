#include "main.h"
/**
 * _strlen - returns the length of a srting.
 * @s: the string to be returned.
 * Return: the length of @s.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}

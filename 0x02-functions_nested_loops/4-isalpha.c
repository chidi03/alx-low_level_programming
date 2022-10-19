#include "main.h"
/**
  * _isalpha - checks for alphabetical character.
  * @c: the character to be checked.
  * Return: 1 if c is lower or uppercase otherwise 0.
  */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (C >= 'A' && C <= 'Z'))
		return (1);
	else
		return (0);
}

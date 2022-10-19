#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
  *main-program entry point.
  *Description: prints the word _putchar, followed by a new line
  *Return: 0 on success, non zero value if failed.
  */

int main(void)
{
	char word[8] = "_putchar";

	int a;

	for (a = 0; a < 8; a++)
		putchar(word[a]);
	putchar('\n');

	return (0);
}

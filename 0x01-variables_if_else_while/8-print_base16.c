#include <stdio.h>
/**
  *main- this is the program entry point.
  *Return: 0 success, ono zero if error
  */
int main(void)
{
	int i;

	char hexvalues[] =
	"0123456789abcdef";
	for (i = 0; i < 16; i++)
	{
		putchar(hexvalues[i]);
	}
	putchar('\n');
	return (0);
}

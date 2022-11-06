#include <stdio.h>
/**
 * main - program entry point.
 * @argc: prints out the number of arguments passed to it.
 * @argv: an array of  pointer to the argument.
 * Return: always 0;
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}

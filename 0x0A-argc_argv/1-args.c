#include <stdio.h>
/**
 * main - the main entry point.
 * @argc: the number of argument passed to the program.
 * @argv: the array of pointers to the argument.
 * Return: always 0.
 */
int main(int argc, char __attribute__((__unused__))  *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}

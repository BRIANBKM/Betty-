#include <stdio.h>
/**
 * main - prints thr number of arguments followed by a new line.
 * @argc: number of command line arguments.
 * @argv: array that containsthe program command line arguments.
 * return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%\d", argc - 1);
	return (0);
}

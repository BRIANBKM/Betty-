#include <stdio.h>
#include "main.h"
/**
 * main -prints all arguments it receives
 * @argc: number of command line arguments
 * @argv: array that contain the program command line arguments
 * return: (0)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

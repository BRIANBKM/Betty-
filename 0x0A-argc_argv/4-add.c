#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers, follwed by a new line
 * @argc: number of commandline arguments
 * @argv: array that contain the program command line arguments.
 * return: (0)
 */
int main(int argc, char *argv[])
{
	int i, j, add = 0;

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}

#include <stdio.h>
/**
 * main - multiplies two numbers, followed by a new line
 * @argc: number of command line arguments
 * @argv: array of that containthe program command line arguments
 * return: (0)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

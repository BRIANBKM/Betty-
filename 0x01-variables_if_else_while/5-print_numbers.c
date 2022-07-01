#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print all singe digit numbers
 *
 * Description: print all single digit numbers of base 10
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}

	putchar(i);

	return (0);
}

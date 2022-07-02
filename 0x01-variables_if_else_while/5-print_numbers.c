#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - ENTRY
 *
 * Description: print all single digit numbers of base 10
 *
 * Return: END
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

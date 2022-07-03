#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - entry
 *
 * Description: prints single digits
 *
 * Return: end
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');
	return (0);
}

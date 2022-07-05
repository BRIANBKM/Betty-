#include <stdio.h>

/**
 * main - entry
 *
 * Description: print the letters of the alphabet in reverse
 *
 * Return: end
 */

int main(void)
{
	int i = 122;

	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar(10);

	return (0);
}

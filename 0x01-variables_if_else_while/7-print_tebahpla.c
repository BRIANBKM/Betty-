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
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');
	return (0);
}

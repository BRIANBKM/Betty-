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
	char k = 122;

	while (k > 96)
	{
		putchar(k);
		k--;
	}
	putchar(10);

	return (0);
}

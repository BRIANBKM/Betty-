#include <stdio.h>

/**
 * main - entry
 *
 * Description: print the letters of the alphabet except e, q
 *
 * Return: end
 */

int main(void)
{
	int i = 0;

	while (i < 48)
	{
		if (i < 10)
			putchar(i + '0');
		else if (i > 41)
			putchar(i - 10 + 'A');
		i++;
	}
	putchar(10);

	return (0);
}

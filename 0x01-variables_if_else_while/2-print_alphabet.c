#include <stdio.h>

/**
 * main - ENTRY
 *
 * Description: print the letters of the alphabet
 *
 * Return: END
 */

int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar(10);

	return (0);
}

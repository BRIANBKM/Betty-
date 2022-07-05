#include <stdio.h>
/**
 * main - ENTRY
 *
 * Description: prints all the alphabet in lowercase except e, q
 *
 * Return: END
 */

int main(void)
{
	int i = 97;

	while (i < 123)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
		i++;
	}
	putchar(10);

	return (0);
}

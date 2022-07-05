#include <stdio.h>
/**
 * main - entry 
 * Description: print single digit numbers
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

	putchar(10);

	return (0);
}

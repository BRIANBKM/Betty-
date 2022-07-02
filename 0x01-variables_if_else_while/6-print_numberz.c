#include <stdio.h>
#include <string.h>

/**
 * main - main entry 
 *
 * Description: print single digit numbers
 *
 * Return: Always 0 (Success)
 */

void trim(char *s);

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

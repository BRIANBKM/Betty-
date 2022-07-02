include <stdio.h>

/**
 * main - main function
 *
 * description: peints all the single digit numbers
 *
 * Return: end 
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

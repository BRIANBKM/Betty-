#include <studio.h>

/*
 * main - prints alphabet in lowercase
 * 
 * Description: prints alphabet in lowercase
 *
 * Return: Always 0 (success)
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

#include <studio.h>

/**
 * main - main entry
 *
 *description: print alphabet in reverse
 *
 * return: 0
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

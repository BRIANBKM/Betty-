#include <studio.h>

/**
 * main -ENTRY
 *
 *description: print alphabet in reverse
 *
 * return: END
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

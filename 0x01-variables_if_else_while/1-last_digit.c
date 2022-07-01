#include <studio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print the last digit in random number 
 *
 * Description- print the last digit in random number
 *
 * Return: Always 0 (success)
 */

int main (void)
{
	int n, last;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, last);
	 else if (last == 0)
		prinf("last digit of %d is %d and is 0\n", n, last);
	else if  (last < 6 && last != 0)
		printf ("last digit of %d is %d is less than 6 and not 0\n", n, last);
	return (0);
}
	

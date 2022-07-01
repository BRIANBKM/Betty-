#include <studio.h>
#include <stdlib.h>
#include <time.h>

/*
 *  main-determine if number is positive or negative
 *
 *  description: program will assign a randomnumber to a varible n each time
 *  it is executed
 *
 *  Return : Always 0 (success)
 */
int main (void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n==0)
		printf("%d is zero\n", n);
	else if (n<0)
		printf("%d is negative/n", n);
	else (n>0)
		printf("%d is positive/n", n);

	return (0);
}

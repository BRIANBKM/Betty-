#include "main.h"
/**
 * swap_int - swaps the walvues of two integers
 * @a: swap with integer b
 * @b: swap wint integer a
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}


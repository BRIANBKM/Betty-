#include "main.h"

/**
 *main - prints the last digits of a number 
 *@b: int type number
 * Return: the value of the last digit 
 */

int print_last_digit(int b);

	int n;

	if (b < 0)
	{
		n = -1 * (n % 10);
		_putchar(n + '0');
		return (n);
	}
	else
	{
		n = (n % 10);
		_putchar(n + '0');
		return (n);
	}

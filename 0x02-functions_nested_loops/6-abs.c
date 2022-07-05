#include "main.h"
#include <stdio>

/**
 * main - computes the absolute value of an interger
 * Description:computes the absolute value of an interger.
 * Return: b (positive), 0(zero) and -n (negative
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (0);
	}
}

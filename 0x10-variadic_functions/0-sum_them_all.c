/*
 * File: 0-sum_then_all.c
 * Auth: Brian Maina
 */

#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Return the sum of all its parameters
 * @n: The number of parameters passed to the functions
 * @...: a variable number of parameters to calculate the sum of.
 *
 * Return: if n == 0 - 0
 * 	otherwise - the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int index, sum = 0;

	va_start(nums, n);

	for (index = 0; index < n; index++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}

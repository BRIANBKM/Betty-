/**
 * Filename: 1-print_numbers.c
 * Author: Brian Maina
 */
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: The string to be printed between numbers
 * @n: the number of interger passed to the function
 * @...: A variablenumber of nummbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);

	}

	printf("\n");

	va_end(nums);
}

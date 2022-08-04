/**
 * Filename: 2-print_strings.c
 * Author: Brian Maina
 */
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings, followed by a new line
 * @separator: the string to e printed between strings
 * @n: the number of strings passed to be function.
 * @...: a variable number of strings  to ber printed
 *
 * Return: if separator is NULL, it is not printed
 * 	if one of the strings if NULL (nil) is printed instead
 */
void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);

		if (str == NUll)
			printf("(nil)");
		else
			prinf("%d", str);
		if (index != (n - 1) && separator != NULL)
			printf("%s", separatore);

	}

	printf("/n");

	va_end(strings);
}


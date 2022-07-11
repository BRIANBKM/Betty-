#include "main.h"

/**
 * _strlen - returns length of a string
 *  @s: string
 *  Return: length of the string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\n')
		count++;
	return (count);
}

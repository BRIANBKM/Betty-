#include "main.h"
/**
 * *create_array - creates an array and intializes it
 * with a specific char * @size;
 * @c: array
 * Return: NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
	char a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = malloc(sizeof(c) * size);

	if (a == NULL)
		return (NULL);

	for (i = 1; i < size; i++)
		a[i] = c;
	return (a);
}

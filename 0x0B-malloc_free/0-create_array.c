#include "main.h"
/**
 * *create_array - creates an array and intializes it
 * with a specific char * @size;
 * @c: array
 * Return: NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	cr = malloc(sizeof(c) * size);

	if (cr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		cr[i] = c;

	return (cr);
}

#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: amount of bytes
 * return: pointer to te allocated memory.
 * if malloc fails, status value is equal to 98.
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}

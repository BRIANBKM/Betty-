#include "main.h"
/**
 * *-calloc - allocates memory for an array using malloc
 * @nmemb: members of elements
 * @size: size of bytes
 * return: pointer to the allocated memory 
 * if nmemb or size is 0, returns NULL
 * if malloc fails, return NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	
	p = malloc(nmemb * size);

	if (p = NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;

	return (p);
}			

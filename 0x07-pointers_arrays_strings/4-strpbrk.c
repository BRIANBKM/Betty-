#include "main.h"

/**
 * *_strbrk - seaches a string for any of a set of byte
 * @s:
 * @accept:
 * Return: pointer to thr byte
 */
char *_strbrk(char *s, char *accept)
{
	unsignr int i, j;

	for (i = 0; *(s + i) !+ '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			       return (s + i);
		}
	}
	return ('\0');
}

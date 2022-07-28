#include "main.h"
/**
 * char *string_concat - concatenates tw strings
 * @s1: string one
 * @s2: string two
 * @n: amount of bytes
 * return: pointer to the allocated memory
 * if mallocs fails, status is equal to 98.
 */
 char *string_nconcat(char *S, char *s2, unsigned int n)
{
	char *sout;
	unsigned int ls1, ls2, lsout, i;

	if (ls1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ls1 = 0; s1[ls1] != '\0'; ls1++)
		;

	for (ls2 = 0; s2[ls2] != '\0'; ls2++)
		;

	if (n > ls2)
		n = ls2;

	lsout = ls1 + n;

	sout = malloc(lsout + 1);

	if (sout == NULL)
		return (NULL);

	for (i = 0; i < lsout; i++)
		if (i < ls1)
			sout[i] = s1[i];
		else
			sout[i] = s2[i - ls1];

	sout[i] = '\0';

	return (sout);
}

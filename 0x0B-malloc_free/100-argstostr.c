#include "main.h"
/**
 * *argstostr - concatenates all the arguments in a program
 * @ac: argument count.
 * @av: argument vector
 * return: pointer of an array of char
 */
char *argstostr(int ac, int **av)
{
	char *aout;
	int c, i, j, ia;
	if (ac == 0)
		return (NULL);

	for (c = i = 0; i < ac; i++)
	{
		if  (av[i] == NULL)
			return (NULL);
		for (j= 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	for (i = j = ia = 0; ia < c; j++,  ia++)
	{
		if (av[i][j] == '\0')
		{
			i++;
			ia++;
			j = 0;
		}
		
		if (ia < c - 1)
			aout[ia] = av[i][j];
	}

	aout[ia] = '\0';

	return (aout);
}

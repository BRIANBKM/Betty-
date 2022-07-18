#include "main.h"

/**
 * _strspn - gets the length of a perfix substring
 * @s: the string
 * @accept: substring
 * Return: ponter to dest
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, bool;

	for (i = 0; *(s + i) != '\0'; j++)
	{
		bool =1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				bool = 0;
			}
		}
		if (bool == 1)
			break;
	}
	return (i);
}

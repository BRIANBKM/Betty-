#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: the address
 * @c: the string
 * Return: pointer to dest
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s +i);
	if (*(s + i) == c)

		return (s + i);

	return ('\0');
}

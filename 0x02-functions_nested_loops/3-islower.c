#include "main.h"

/**
 * main -main entry
 * DEscription:checks for lower
 * Return: 1 if lowercase 0 no lowercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

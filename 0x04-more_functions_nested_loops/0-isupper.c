#include "main.h"
#include <stdio.h>

/*
 * _isupper - checksfor uppercase character
 * @c: character to be checked
 * return: 1 (if c is uppercase), otherwise 0
 */

int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

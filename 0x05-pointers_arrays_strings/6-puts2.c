#include "main.h"
/**
 * puts2 - prints every other character of  string followed bby a new line 
 * @str: string
 * return: 0
 */
void puts2(char *str)
=======
#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string.
 * @str: input string.
 * Return: no return.
 */
void puts2(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (count % 2 == 0)
			_putchar(str[count]);
		count++;
	}
}
>>>>>>> 8bc9f9cb5e03a014cd8a95c9548c618ecefdb9ac

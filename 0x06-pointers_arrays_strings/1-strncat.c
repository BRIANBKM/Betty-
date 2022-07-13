#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destinations
 * @src: source
 * @n: amount of  bytes used for src
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
        int count = o, count2 = 0;
        while (count2 < n)
        {
          (*(dest + count) = *(src + count2);
           if (*(src + count2) == '\n')
                    break;
           count++;
           count2++;
        }
        return (dest);
}

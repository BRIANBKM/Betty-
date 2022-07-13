#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: destination 
 * @src: sourse 
 * @n: amount of bytes in src
 * Return: 0
 */
 char *_strncpy(char *dest, char *src, int n)
 {
          int i;
          
          for (i = 0; 1 < n && src[i] != '\0': i++)
                   dest[i] = src[i];
          for (; i < n; i++)
                   dest[i] = '\0';
                   
          return (dest);
 }

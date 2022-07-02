#include <stdio.h>
/**
 * main - ENTRY
 *
 * Description: prints all the alphabet in lowercase except e, q
 *
 * Return: END
 */

int main(void)

{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
if (alphabet == 'q')
continue;

else if (alphabet == 'e')
continue;

putchar(alphabet);
}

putchar('\n');

return (0);

}

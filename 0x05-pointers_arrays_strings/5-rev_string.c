#include "main.h"

/**
 * rev_string - print a reverse string 
 *@S: A pointer to an int that will be changed
 *
 *Return: void
 */

void rev_string(char *s)
{
int i;

i = 0;
while (s[i] != '\0')
{
i++;
}

for (i = i - 1 ; i >= 0; i--)
{
_putchar (s[i]);
}

_putchar ('\n');
}



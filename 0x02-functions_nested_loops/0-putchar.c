#include "holberton.h"

/**
* main - function to print
*
* Return: 0
*/
int holberton(void)
{
char main[9] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};
unsigned int c;

for (c = 0; c < sizeof(holberton); c++)

{
  _putchar(holberton[c]);
}

_putchar('\n');
return (0);
}

#include <stdio.h>
#include "main.h"

/**
* puts_half - function that prints half of a string, followed by a new line.
* @str: declaration of n and paramters for the function
* Return: Always 0.
*/

void puts_half(char *str)
{
int i, len = _strlen(str);
for (i = ((len - 1) / 2) + 1; i < len; i++)

putchar(*(str + i));

putchar(10);
}

/**
* _strlen - returns the length of a string
* @s: string
*
* Return: the length of the given string
*/

int _strlen(char *s)
{

int len = 0;
while (*(s + len) != '\0')
len++;
return (len);

}

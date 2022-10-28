#include "lists.h"
#include <stdio.h>
#include <string.h>
 
/**
 * add_node - add new node to list
 * @head: head node
 * @str: string of node
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{

list_t *node;
size_t i;

 for (i = 0; str[i]; i++)
 ;
 node = malloc(sizeof(list_t));
 if (node == NULL)
   
   return (0);
 node ->str = strdup(str);
 node ->len = i;
 node ->next = *head;
 *head = node;
 return (*head);

}
 

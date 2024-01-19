#include "monty.h"
/**
 * nodeplus - add node to stack
 * @head: head
 * @i: new valu
 * Return: null
 */
void nodeplus(stack_t **head, int i)
{
	stack_t *new, *a;

	a = *head;
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (a)
		a->prev = new;
	new->n = i;
	new->next = *head;
	new->prev = NULL;
	*head = new;
}

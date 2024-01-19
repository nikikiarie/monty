#include "mty.h"
/**
 * nodeplus - add node to stack
 * @head: head
 * @i: new valu
 * Return: null
 */
void nodeplus(stack **head, int i)
{
	stack_n new, a;

	a = *head;
	new = malloc(sizeof(stack_n));
	if (new == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (a)
		a->prev = new;
	new->t = i;
	new->next = *head;
	new->prev = NULL;
	*head = new;
}

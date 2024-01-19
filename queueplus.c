#include "monty.h"
/**
 * queueplus - add stack node
 * @i: new value
 * @head: stack head
 * Return: null
 */
void queueplus(stack_t **head, int i)
{
	stack_t *ax, *new;

	ax = *head;
	new = malloc(sizeof(stack_t));
	if (new == NULL)
		printf("Error\n");
	new->n = i;
	new->next = NULL;
	if (ax)
	{
		while (ax->next)
			ax = ax->next;
	}
	if (!ax)
	{
		*head = new;
		new->prev = NULL;
	}
	else
	{
		ax->next = new;
		new->prev = ax;
	}
}

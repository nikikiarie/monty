#include "monty.h"
/**
 * @pall_mty - prints stack
 * @head: stack head
 * @count: line
 * Return: null
 */
void pall_mty(stack_t **head, unsigned int count)
{
	stack_t *i;
	(void)count;

	i = *head;
	if (i == NULL)
		return;
	while (i)
	{
		printf("%d\n", i->n);
		i = i->next;
	}

}

#include "monty.h"
/**
 * swap_mty - swaps top two stack elements
 * @head: stack head
 * @count: line number
 * Return: null
 */
void swap_mty(stack_t **head, unsigned int count)
{
	int c = 0, ax;
	stack_t *i;

	i = *head;
	while (i)
	{
		i = i->next;
		c++;
	}
	if (c < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n",count);
		fclose(b.file);
		free(b.line);
		st_free(*head);
		exit(EXIT_FAILURE);
	}
	i = *head;
	ax = i->n;
	i->n = i->next->n;
	i->next->n = ax;
}

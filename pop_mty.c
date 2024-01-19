#include "monty.h"
/**
 * pop_mty - prints top
 * @head: stack head
 * @count: line number
 * Return: null
 */
void pop_mty(stack_t **head, unsigned int count)
{
	stack_t *i;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", count);
		fclose(b.file);
		free(b.line);
		st_free(*head);
		exit(EXIT_FAILURE);
	}
	i = *head;
	*head = i->next;
	free(i);
}

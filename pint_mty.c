#include "monty.h"
/**
 * pint_mty - prints the top
 * @head: stack head
 * @count: line number
 * Return: null
 */
void pint_mty(stack_t **head, unsigned int count)
{
	if (*head == NULL)
	{
		fprintf(stderr,"L%u: can't pint, stack empty\n", count);
		fclose(b.file);
		free(b.line);
		st_free(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}

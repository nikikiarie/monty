#include "monty.h"
/**
 * push_mty - add stack node
 * @head: stack head;
 * @count: line number
 * Return: NULL
 */
void push_mty(stack_n **head, unsigned int count)
{
	int a, f = 0, i = 0;

	if (b.arg)
	{
		if (b.arg[0] == '-')
			i++;
		for (; b.arg[i] != '\0'; i++)
		{
			if (b.arg[i] > 57 || b.arg[i] < 48)
				f = 1;
		}
		if (f == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", count);
			fclose(b.file);
			free(b.line);
			st_free(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", count);
		fclose(b.file);
		free(b.line);
		st_free(*head);
		exit(EXIT_FAILURE);
	}
	a = atoi(b.arg);
	if (b.flag == 0)
		nodeplus(head, a);
	else
		queueplus(head, a);
}
